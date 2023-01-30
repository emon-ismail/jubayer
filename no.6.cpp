
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
double func(double x)
{
	return x*x*x - x*x*x*x*x*x + 4;
}
double derivFunc(double x)
{
	return 3*x*x - 6*x;
}
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

	x = x - h;
	}

	cout << "The value of the root is : " << x;
}
int main()
{
	double x0 = -20; 
	newtonRaphson(x0);
	return 0;
}
