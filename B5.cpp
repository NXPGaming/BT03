#include <iostream>
#include <iomanip>
using namespace std;

struct Sinhvien
{
	double toan,li,anh,DTB;
	void Nhapdl()
	{
		cout<<"\nDiem Toan : ";
		cin>>toan;
		cout<<"\nDiem ly : ";
		cin>>li;
		cout<<"\nDiem anh : ";
		cin>>anh;
		DTB = (toan + li + anh)*1.0 / 3;
	}
	void Xuatdl()
	{
		cout<<toan<<"     "<<li<<"     "<<anh;
	}
};

int main()
{
	int n;
	cin>>n;
	Sinhvien *SV = new Sinhvien [n];
	for(int i=0;i<n;i++)
	{
		SV[i].Nhapdl();
		cout<<"\n----------------------------------------------------------------------\n";
	}
	cout<<"Theo diem mon Toan : \n";
	cout<<"                   Toan   Ly   Anh\n";
	for(int i = 0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(SV[i].toan <= SV[j].toan)
			{
				swap(SV[i],SV[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\nSinh vien "<<i<<"         ";
		SV[i-1].Xuatdl();
		cout<<endl;
	}
	cout<<"Theo diem mon Ly : \n";
	cout<<"                   Toan   Ly   Anh\n";
	for(int i = 0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(SV[i].li <= SV[j].li)
			{
				swap(SV[i],SV[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\nSinh vien "<<i<<"         ";
		SV[i-1].Xuatdl();
		cout<<endl;
	}
	cout<<"Theo diem trung binh : \n";
	cout<<"                TB   Toan   Ly   Anh\n";
	for(int i = 0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(SV[i].DTB <= SV[j].DTB)
			{
				swap(SV[i],SV[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\nSinh vien "<<i<<"      ";
		cout<<SV[i-1].DTB<<"   ";
		SV[i-1].Xuatdl();
		cout<<endl;
	}
	
	delete []SV;
	system ("pause");
	return 0;
}