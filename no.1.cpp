#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
string s;
long long n,j,f=0,cnt1=0,cnt2=0,pos,m=0;
cin>>s;
n=s.size();
for(j=0;j<n;j++)
{
if(s[j]=='.'){
f=1;
pos=j;
}
}
if(f==0)
{
for(j=0;j<n;j++)
{
if(s[j]=='0')
cnt1++;
else
break;
}
for(j=n-1;j>=0;j--)
{
if(s[j]=='0')
cnt2++;
else
break;
}
if(cnt1==n)
cout<<"0";
else
cout<<n-(cnt1+cnt2);
return 0;
}
if(f==1)
{
for(j=0;j<n;j++)
{
if(s[j]=='0')
cnt1++;
}
if(n-1==cnt1){
cout<<"0";
m=1;
}
}
if(f==1&&m==0)
{
for(j=0;j<n;j++)
{
if(s[j]=='.'||s[j]=='0')
cnt2++;
else
break;
}
if(j>pos)
cout<<n-cnt2;
else
cout<<(n-(cnt2+1));
}
return 0;
}