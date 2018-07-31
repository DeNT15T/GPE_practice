#include <iostream>
using namespace std;

int main()
{
	int a, b, i, j;
	char field[100][100];
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				cin >> field[i][j];
			}
		}
		cout << field[100][100];
		
	}
	return 0;
}
