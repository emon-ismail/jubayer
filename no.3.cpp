#include <iostream>

double evaluate_polynomial(double x) {

    double a = 10, b = 5, c = -2, d = 1;
    
 
    double result = a + x * (b + x * (c + x * d));
    return result;
}

int main() {
    double x = 5;
    double result = evaluate_polynomial(x);
    std::cout << "f(x) = " << result << std::endl;
    return 0;
}
