#include <stdio.h>
#include <stdlib.h>

//int cmp(const void *s1, const void *s2);

int main(void)
{
	int test_case , relative , street , i , j, temp;

	scanf("%d",&test_case);
	while(test_case)
	{
		test_case--;
		scanf("%d",&relative);
		int num[30000];
		for(i=0;i<relative;i++)	/* 讀取各個家人的門牌號碼 */
		{
			scanf("%d",&street);
			num[i]=street;
		}
//		qsort(num,relative,sizeof(int),cmp);	/* qsort */
		
		for(i=0;i<relative;i++)		/* qsort無法運作，使用insert sort */
		{
			for(j=i;j<relative;j++)
			{
				if(num[i] > num[j])
				{
					temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
		}
		
		int Vito_home = num[relative/2];
		int distance = 0; 
		for(i=0;i<relative;i++)	/*計算Vito到各家人的距離和*/
		{
			distance += abs(Vito_home - num[i]);
		}

		printf("%d\n",distance);
	}
	return 0;
}

//int cmp(const void *s1,const void *s2) /* qsort使用的指標函數，定義比較方式 */
//{
//	return *(char *)s1 - *(char *)s2;
//}
