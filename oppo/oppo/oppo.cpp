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
int main()
{
    cout << my_pow(-2, 5);
}
