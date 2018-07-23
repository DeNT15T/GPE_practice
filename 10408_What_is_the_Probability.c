/* 2018/7/21 LDYMJ1993 [at] HOME */

#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main(void)
{
	int Num;		/* 幾個case */
	double Success, Fail;	/* 成功、失敗機率 */
	int People, Target;	/* 總人數、觀察對象 */
	double First, Top, Down;	/* 拆公式 */
	double Ans;


	scanf("%d", &Num);
	while(Num--)
	{
		scanf("%d%lf%d",&People,&Success,&Target);
		Fail = 1 - Success;	/* 求出失敗機率 */
		

		if(Success <= 0)
		{
			printf("0.0000\n");
			continue;
		}

		First = Success;
		Top = pow(Fail, Target - 1);
		Down = 1 - pow(Fail, People);

//		First = pow(Fail, Target - 1) * Success;
//		Top = 1 - pow(pow(Fail, People), 100);
//		Down = 1 - pow(Fail, People);

		Ans = First * Top / Down;
	
		printf("%.4lf\n", Ans);
	}
	return 0;
}
