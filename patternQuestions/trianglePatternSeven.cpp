/**

 Difficulty: Medium
 Problem Statement: TO PRINT THE FOLLOWING PATTERN (Floyd's Triangle)
     *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *
**/
#include <iostream>
using namespace std;
int main(){
    int n,start=1;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--)
            cout << " ";
        if(i==1){
            cout << " *" <<endl;
            continue;
        }
        cout<<"* ";
        
        for(int j=1;j<i;j++)
            cout << " ";
        for(int j = 1; j<i;j++)
            cout  <<" ";
        cout << "*" <<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-i;j>=1;j--)
            cout << " ";
        if(i==0){
            cout << "*" <<endl;
            continue;
        }
        cout<<"* ";
        
        for(int j=i;j>1;j--)
            cout << " ";
        for(int j = i; j>1;j--)
            cout  <<" ";
        cout << "*" <<endl;
    }
}