/* 2018/7/24 LDYMJ1993 [at] NCTU */

#include <stdio.h>

int main(void)
{
	int v, t, result;

	while(scanf("%d%d", &v, &t) != EOF)
	{
		result = v * t * 2 ;
		printf("%d\n", result);
	}
	return 0;
}
