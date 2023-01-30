#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return p
    x*x*x*x*x - x*x - 10;
}

double g(double x)
{
    return pow(10 - 3 * x*x, 1/5);
}

int main()
{
    double x0 = 1;
    double x1 = g(x0);
    int iterations = 0;
    while (fabs(x1-x0) > 0.001)
    {
        x0 = x1;
        x1 = g(x0);
        iterations++;
    }
    cout << "Root: " << x1 << endl;
    cout << "Iterations: " << iterations << endl;
    return 0;
}
