#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"Enter First name: ";
    string first;
    cin >> first;
    cout << "Enter Second name";
    string second;
    cin >> second;
    string initials = first.substr(0, 1) +'&' + second.substr(0,1);
    cout << initials << endl;
    int size_of_int = sizeof(int);
    int size_of_unsigned_long = sizeof(unsigned long);
    int size_of_long = sizeof(long);
    cout << size_of_int << " "<<size_of_long <<" "<< size_of_unsigned_long;
    return 0;  


}
