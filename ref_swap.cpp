#include <iostream>

using namespace std;

void swap_ref(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

void swap(int x,  int y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int a = 1, b = 2;
    swap_ref(a, b);
    cout<< a << " " << b << endl;
    int c = 3, d = 4;
    swap(c, d);
    cout << c << " " << d << endl;
    return 0;

}
