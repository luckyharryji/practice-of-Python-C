#include <iostream>
#include <vector>

using namespace std;

double sum(vector<double> data){
    double total = 0;
    for (int i = 0; i < data.size(); i++){
        total = total + data[i];
    }
    return total;

}
int main() {

   vector<double> data;
   data.push_back(1.0);
  data.push_back(1.0);
    cout << sum(data) << endl; 

}
