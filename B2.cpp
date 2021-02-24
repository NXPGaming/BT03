#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *a=new int [n];
	int tong = 0, dem = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] % 2 == 0)
		{
			tong+=a[i];
		}
		else dem++;
	}
	sort(a,a+n);
	cout<<a[0]<<"\n"<<a[n-1];
	cout<<tong<<"\n"<<dem;
	delete []a;
	system("pause");
	return 0;
}