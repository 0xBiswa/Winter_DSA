/**

 Difficulty: Easy 
 Problem Statement: TO PRINT THE FOLLOWING PATTERN
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    -> The pattern will contain same number of rows (n) as that of columns

 **/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows or columns: ";
    cin >> n;
    // Using nested for loop to print the program
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}