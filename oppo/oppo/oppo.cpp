#include <iostream>

using namespace std;
double my_pow(double a, int b) {
    long double x = a;
    if (a >= 0) {
        for (int i = 0; i < b; i++) {
            x = x * a;
        }
        return x;
    }
    else {
        for (int i = 0; i < b; i++) {
            x = x * a;
        }
        return -x;
    }
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
    cout << my_pow(-2, 5);
    cout << pow(3, 8);
    cout << my_pow(2, 8);
}