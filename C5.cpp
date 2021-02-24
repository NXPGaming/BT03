#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	int a[10][10]={0};
	int dem = 0;
	int k=0,h=0,g=0;
	int p = 0, t = 0;
	int tich = x*y;
	while(dem < tich)
	{
		k++;
		if(k%2 != 0)
		{
			h++;
			if(h % 2 != 0)
			{
				for(int j =0; j < y ; j++)
				{
					if(a[p][j] == 0)
					{
						dem++;
						a[p][j] = dem;
						t=j;
					}
				}
			}
			else 
			{
				for(int j= y -1; j >= 0 ; j--)
				{
					if(a[p][j] == 0)
					{
						dem++;
						a[p][j] = dem;
						t = j;
					}
				}
			}
		}
		else 
		{
			g++;
			if(g % 2 != 0)
			{
				for(int i = 0; i < x ; i++)
				{
					if(a[i][t] == 0)
					{
						dem++;
						a[i][t] = dem;
						p = i;
					}
				}
			}
			else 
			{
				for(int i= x -1; i >= 0 ; i--)
				{
					if(a[i][t] == 0)
					{
						dem++;
						a[i][t] = dem;
						p = i;
					}
				}
			}
		}
	}
	for(int i =0;i< y ;i++)
	{
		cout<<a[0][i]<<"  ";
	}
	cout<<endl;
	for(int i =1;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(i== x-1 && j== y-1 && a[i][j-1] >= 0 && a[i][j-1] <= 9)
			{
				cout<<" "<<a[i][j];
			}
			else
			{
			cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}