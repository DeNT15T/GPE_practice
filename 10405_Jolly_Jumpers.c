/* 2018/7/23 LDYMJ1993 [at] NCTU */

#include <stdio.h>
#include <stdlib.h>

int count, i, test_data;

int main(void)
{
	while(scanf("%d", &count) != EOF)
	{
		int J=1;
		int number[3000]={0}, jolly[3000]={0}; /* 初始化紀錄陣列 */

		for(i=0;i<count;i++)	/* 輸入數值陣列 */
		{
			scanf("%d", &number[i]);
		}

		for(i=0;i<count-1;i++)	/* 檢查差值並紀錄 */
		{
			jolly[ abs(number[i]-number[i+1])] ++;
		}
		
		for(i=1;i<count;i++)	/* 檢查所有差值皆出現一次 */
		{
			if(jolly[i] != 1)
			{
				J=0;
				break;
			}
		}

		if(J)			/* 輸出檢查結果 */
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	return 0;
}
