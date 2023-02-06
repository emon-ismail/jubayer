#include<bits/stdc++.h>
using namespace std;
int N;
double a[10], b[10], fd[10];
double Func(double* g, double x, int n)
{
 double ret = 0, u = 1;
 for(int i=0; i<=n; ++i)
 {
 ret += g[i]*u;
 u *= x;
 }
 return ret;
}
double Newton(int n)
{
 for(int i=0; i<n; ++i)
 fd[i] = a[i+1] * (i+1);
 double x = -100;
 for(int i=0; i<100; ++i)
9
 x = x-Func(a, x, n)/Func(fd, x, n-1);
 return x;
}
void NewPoly(double x, int n)
{
 b[n+1] = 0;
 for(int i=n; i>=0; --i)
 b[i] = b[i+1]*x + a[i];
 for(int i=0; i<n; ++i)
 {
 a[i] = b[i+1];
 }
}
void solve()
{
 int cas = 1;
 while (~scanf("%d", &N) && N)
 {
 for (int i = N; i >= 0; --i)
 scanf("%lf", &a[i]);
10
 printf("Equation %d:", cas++);
 int dd=N;
 for (int i = 0; i < N; ++i)
 {
 double x = Newton(dd);
 printf(" %.4f", x);
 NewPoly(x, dd);
 dd--;
 }
 printf("\n");
 }
}
int main()
{
 solve();
}