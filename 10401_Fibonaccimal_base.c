/* 2018/7/20 LDYMJ1993 [at] NCTU */

#include <stdio.h>

int Fib(int a, int b);

int main(void)
{
	int num, input, i;	/* 宣告 */
	int base[1000] = {};
	base[0]=1;
	base[1]=2;


	scanf("%d", &num);	/* 輸入case數量 */
	while(num)
	{
		i=1;
		num--;	
		scanf("%d", &input);

		while(base[i] <= input)	/* 計算出必要的費氏數 */
		{
			i++;
			base[i]=Fib(base[ i-1 ], base[ i-2 ]);
		}

		printf("%d = ", input);	/* 開始輸出 */
		while(i > 0)
		{
			i--;
			if(base[ i ] > input)
			{
				printf("0");
			}
			else
			{
				printf("1");
				input -= base[ i ];
			}
			
		}
		printf(" (fib)\n");
	}
	return 0;
}

int Fib(int a, int b)
{
	return a + b;
}
