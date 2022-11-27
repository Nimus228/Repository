#include <iostream>

using namespace std;
double my_pow(double a, unsigned int b) {
    long double x = a;
    for (int i = 0; i < b; i++) {
        x = x * a;
    }
    return x;
}
int main()
{
    cout << my_pow(2, 8);
}
