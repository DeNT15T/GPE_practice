/* 2018/7/23 LDYMJ1993 [at] NCTU*/

#include <stdio.h>

int main(void)
{
	unsigned long i, j, k, max, count, temp;
	while(scanf("%ld%ld", &i, &j)!=EOF)
	{
		printf("%ld %ld ", i, j);
		if(i > j)				/* 確保j比較大 */
		{
			temp = i;
			i = j;
			j = temp;
		}

		max = 1;

		if(i==j)			/* 處理只有一個數字的狀況 */
		{
			k = i;
			count = 1;
			while(k != 1)
			{
				k = k % 2 == 1 ? 3*k+1 : k/2;
				count++;
			}
			printf("%ld\n", count);
			continue;
		}

		i = i%2==1 ? i : i+1;		/* 只考慮奇數*/
		for( ; i <= j; i=i+2)		/* 依序測試所有數值 */
		{
			count = 1;
			k = i;
			while(k != 1)		/* 3n+1演算法、算出cycle */
			{
				k = k % 2 == 1 ? 3*k+1 : k/2;
				count++;
			}

			max = max > count ? max : count;
		}
		printf("%ld\n", max);
	}
	return 0;
}
