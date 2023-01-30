#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
return ((x*x*x)-(9*x)+1);
}
int main()
{
double a=0,b=1,root,errorLimit=0.0005;
while(fabs(a-b)>errorLimit)
{
root=(a+b)/2;
if(f(root)*f(a)<0)
b=root;
else
a=root;
}
cout<<root<<endl;
return 0;
}