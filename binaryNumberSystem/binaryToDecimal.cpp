#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int& n){
    int d=0,i=0;
    while(n>0){
        if(n%10 ==0 || n%10==1){
            d+=pow(2,i)*(n%10);
            n/=10;
        }else{
            return -1;
        }
        i++;
    }
    return d;
}
int main(){
    int n, b;
    cout << "Enter the Binary: ";
    cin >> n;
    b = binaryToDecimal(n);
    auto p = [b]()
    {
        if(b == -1)
            cout << "Invalid Input" <<endl;
        else
            cout << "Decimal Equivalent Is : " << b <<endl;
    };
    p();
}