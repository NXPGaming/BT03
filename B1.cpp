#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        
    }
    double s=0;
    for(int i=0;i<n;i++)
    {
        s=(a[i]-(sum*1.0f/n))*(a[i]-(sum*1.0f/n))+s;
        
    }
    cout<<setprecision(2)<<fixed<<sum*1.0f/n<<" "<<s*1.0f/n;
    
}