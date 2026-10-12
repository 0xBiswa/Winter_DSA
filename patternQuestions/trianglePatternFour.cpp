/**

 Difficulty: Easy 
 Problem Statement: TO PRINT THE FOLLOWING PATTERN
    1
    2 1
    3 2 1
    4 3 2 1
**/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j= i; j>=1;j--)
            cout << j << " ";
        cout << endl;
    }
}