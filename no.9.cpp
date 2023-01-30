#include<iostream>
using namespace std;
int main()
{
long long n,cof,i;
double x,a[1005],sum;
cout<<"Degree of the polynomial : ";
cin>>n;
cout<<"Enter coefficient from higher to lower order : ";
for(i=n;i>=0;i--)
cin>>a[i];
cout<<"x : ";
cin>>x;
sum=0;//b3
for(i=n-1;i>=0;i--){
sum=a[i+1]+(x*sum);
cout<<"b"<<i<<" = "<<sum<<endl;
}
}