#include <iostream>

using namespace std;

int main() {
    double a = 1.0;
    double* account = &a;
    *account = 100.0;
    cout << &a << endl;
    cout << a << endl;
    cout << account << endl;
    cout << *account << endl;
    cout << &*account << endl;
    return 0;
}
