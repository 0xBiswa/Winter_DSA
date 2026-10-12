#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int& n){
    int d=0,i=0;
    while(n>0){
        d = (n%2)*pow(10,i) + d;
        n/=2;
        i++;
    }
    return d;
}
int main(){
    int n, b;
    cout << "Enter the number: ";
    cin >> n;
    b = decimalToBinary(n);
    cout << "Binary Equivalent Is : " << b <<endl;
}