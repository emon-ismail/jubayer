#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
 string line;
 istringstream s;
 while (getline(cin, line)) {
 s.str(line);
 int k;
 s >> k;
5
 s.clear();
 getline(cin, line);
 s.str(line);
 int n = 0;
 while (s >> a[n])
 n++;
 s.clear();
 if (n == 1) {
 cout << "q(x):\nr = " << a[0] << endl << endl;
 }
 else {
 int b = a[0];
 cout << "q(x): " << b;
 for (int i = 1; i < n - 1; i++) {
 b = a[i] + k * b;
 cout << ' ' << b;
 }
 cout << endl;
 cout << "r = " << a[n - 1] + k * b << endl << endl;
 }
 }
 return 0;
}





