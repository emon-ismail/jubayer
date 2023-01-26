#include <iostream>
#include <string>

using namespace std;

int countSigDigits(string num)
{
    int count = 0;
    bool trailingZeros = true;
    bool hasDecimal = false;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '.')
        {
            hasDecimal = true;
            continue;
        }
        if (num[i] == '0' && trailingZeros)
        {
            continue;
        }
        if (num[i] != '0')
        {
            trailingZeros = false;
            count++;
        }
        if (hasDecimal && num[i] == '0' || !hasDecimal && num[i] == '0')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string num1 = "";
    string num2 = "";
    cin>> num1;
    cin>> num2;

    cout << countSigDigits(num1) << endl;
    cout << countSigDigits(num2) << endl;
    return 0;
}
//how to send emails with mailgun in nodejs?