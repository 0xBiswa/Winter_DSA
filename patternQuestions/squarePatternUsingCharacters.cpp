/**

 Difficulty: Easy 
 Problem Statement: TO PRINT THE FOLLOWING PATTERN
    A B C D
    A B C D
    A B C D
    A B C D
    -> The pattern will contain same number of rows (n) as that of columns

 **/

#include <iostream>
using namespace std;

int main(){
    int n;
    char ch;
    cout << "Enter the number of rows or columns: ";
    cin >> n;
    // Using nested for loop to print the program
    for (int i=1; i<=n; i++){
        ch = 'A';
        for(int j=1; j<=n; j++){
            cout << (char) (ch + j -1) <<" ";
        }
        cout << endl;
    }
}