#include <stdio.h>

#define MAX 1001
#define ASCII 128

int i,j;

main()
{
	char str1[MAX],str2[MAX];


	while(gets(str1)&&gets(str2))
	{
		int table[ASCII]={0};
		for(i=0;str1[i];i++)
		{
			for(j=0;str2[j];j++)
			{
				if(str1[i]==str2[j])
				{
					table[ str1[i] ]++;
					str2[j]='0';
					break;
				}
			}
		}
	

		for(i=0;i<ASCII;i++)
		{
			for(;table[i];table[i]--)
			{
				printf("%c",i);
			}
		}
		printf("\n");
	}
}
