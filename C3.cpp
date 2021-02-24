#include <iostream>
using namespace std;
int KT(int n)
{
	int s,h=0;
	while(n!=0)
	{
		 s= n%10;
		 h=h*10+s;
		 n/=10;
	}
	return h;
}
	
int main()
{
	int T;
	cin>>T;
	int a,b;
	for(int i=1;i<=T;i++)
	{
		cin>>a>>b;
		int dem=0;
		for(int j=a;j<=b;j++)
		{
			int g = KT(j);
			if(j == g)
			{
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	system ("pause");
	return 0;
}
