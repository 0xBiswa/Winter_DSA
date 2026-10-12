/**

 Difficulty: Easy 
 Problem Statement: TO PRINT THE FOLLOWING PATTERN
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
    -> The pattern will contain same number of rows (n) as that of columns

 **/

#include <iostream>
using namespace std;

int main(){
    int n,start=1,j;
    cout << "Enter the number of rows or columns: ";
    cin >> n;
    // Using nested for loop to print the program
    for (int i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << start -1 + j <<" ";
        }
        start += j-1;
        cout << endl;
    }
}