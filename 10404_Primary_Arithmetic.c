/* 2018/7/24 LDYMJ1993 [at] NCTU */

#include <stdio.h>

int main(void)
{
	unsigned int a, b;

	while(scanf("%d%d", &a, &b)!=EOF && (a || b))
	{
		int temp = 0, carry = 0;	//temp紀錄進位，carry紀錄進位次數
		
		while(a||b)		// 開始處理並紀錄進位
		{
			temp = a%10 + b%10 + temp;
			temp /= 10;
			if(temp)
			{
				carry++;
			}
			a/=10;
			b/=10;
		}
		
		if(carry == 1)		//輸出進位次數
		{
			printf("1 carry operation.\n");
		}
		else if(carry > 1)
		{
			printf("%d carry operations.\n", carry);
		}
		else
		{
			printf("No carry operation.\n");
		}
	}
	return 0;
}
