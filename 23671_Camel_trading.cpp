/* 2018/7/29 LDYMJ1993 [at] home */

#include <bits/stdc++.h>

using namespace std;


int main(){
	int N, i;
	cin >> N;	//輸入case數
	while(N--){
		long long int tmp1, tmp2, tmp3, Max_ans = 1, Min_ans = 0;
		string data;

		cin >> data;	//讓使用者Input成字串

		vector<long long int> Q;	//紀錄用的Queue

		for(i = 0;i < data.length(); i++){	//分析最大解
			if(isdigit(data[i])){
				tmp1 = data[i] - '0';
				if(i+1 < data.length() && isdigit(data[i+1])){	//判定十位數
					i++;
					tmp2 = data[i] - '0';
					tmp1 = tmp1 * 10 + tmp2;
				}
				Q.push_back(tmp1);
			}else if(data[i]=='+'){		//判定運算元，先+
				i++;
				tmp1 = data[i] - '0';
				if(i+1 < data.length() && isdigit(data[i+1])){
					i++;
					tmp2 = data[i] - '0';
					tmp1 = tmp1 * 10 + tmp2;
				}
				tmp3 = Q.back();
				Q.pop_back();
				tmp3 += tmp1;
				Q.push_back(tmp3);
			}else{				//判定運算元，不做*
				continue;
			}
		}
		do{		//處理最大解，所有數字相乘，並將答案存到Max_ans
			Max_ans *= Q.back();
			Q.pop_back();
		}while(!Q.empty());

//-------------------------------------------------------------------------------

		for(i = 0;i < data.length(); i++){	//分析最小解
			if(isdigit(data[i])){		//判定數字
				tmp1 = data[i] - '0';
				if(i+1 < data.length() && isdigit(data[i+1])){	//判定十位數
					i++;
					tmp2 = data[i] - '0';
					tmp1 = tmp1 * 10 + tmp2;
				}
				Q.push_back(tmp1);
			}else if(data[i]=='*'){		//判定運算元，先*
				i++;
				tmp1 = data[i] - '0';
				if(i+1 < data.length() && isdigit(data[i+1])){
					i++;
					tmp2 = data[i] - '0';
					tmp1 = tmp1 * 10 + tmp2;
				}
				tmp3 = Q.back();
				Q.pop_back();
				tmp3 *= tmp1;
				Q.push_back(tmp3);
			}else{				//判定運算元，不做+
				continue;
			}
		}
		do{		//處理最小解，所有數字相加，並將答案存到Min_ans
			Min_ans += Q.back();
			Q.pop_back();
		}while(!Q.empty());

		cout << "The maximum and minimum are " << Max_ans << " and " << Min_ans << "." << endl;

	}
	return 0;
}
