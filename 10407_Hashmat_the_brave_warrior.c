/* 2018/7/23 LDYMJ1993 [at] NCTU */

#include <stdio.h>

long long int Hashmat, Opponent;

int main(void)
{
	while(scanf("%lld%lld", &Hashmat, &Opponent) != EOF)
	{
		if(Opponent > Hashmat)
		{
			printf("%lld\n", Opponent - Hashmat);
		}else
		{
			printf("%lld\n", Hashmat - Opponent);
		}
	}
	return 0;
}
