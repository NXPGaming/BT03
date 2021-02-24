#include <iostream>

using namespace std;

int dem(char a[10][100], int m, int n, int k)
{
	int dem=0;
	for(int i = m-1;i<=m+1;i++)
	{
		if(i<0 || i==k )
		{
			continue;
		}
		else
		{
		for(int j= n-1;j<=n+1;j++)
		{
			if(a[i][j] == '*')
			{
				dem++;
			}
		}
		}
	}
	return dem;
}

int main()
{
	int m,n;
	cin>>m>>n;
	char map[10][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>map[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(map[i][j] == '*')
			{
				cout<<"* ";
			}
			else
			cout<<dem(map,i,j,m)<<" ";
		}
		cout<<endl;
	}
	system ("pause");
	return 0;
}