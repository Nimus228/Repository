#include <iostream>

using namespace std;
double my_pow(double a, unsigned int b) {
    double x = a;
    for (int i = 0; i < b; i++) {
        x = x * a;
    }
    return x;
}
long int pow(long double x, unsigned int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n % 2 == 0)
        return pow(x * x, n / 2);
    else
        return pow(x * x, n / 2) * x;
}
int main()
{
    cout << pow(3, 8);
    cout << my_pow(2, 8);
}
