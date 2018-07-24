/* 2018/7/24 LDYMJ1993 [at] NCTU */
/* 參考data：https://blog.csdn.net/mobius_strip/article/details/37757287 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len, a, b, ab, Quotient, Remainder;	/* a個位數、b十位數、ab還原後的末兩位數值、Quotient商數；Remainder餘數 */
	int maps[20] = {0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1,5,4};
	char s[300];	/* 儲存輸入資料 */
	while(scanf("%s", &s) != EOF && *s != '0')
	{
		len = strlen(s);
		if(len<2)
		{
			ab = *s - '0';	/* 若僅有1位數，直接轉換成數值 */
		}
		else
		{
			a = s[len-2]-'0';
			b = s[len-1]-'0';
			ab = a * 10 + b;	/* 取出末兩位轉換成數值 */
		}
		Quotient = ab / 20;
		Remainder = ab % 20;
		printf("%d\n", (maps[Remainder] + Quotient*4) % 10);	
	}
	return 0;
}
