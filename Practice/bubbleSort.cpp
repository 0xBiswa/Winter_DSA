#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,254,3,5,78,56,752,1,4,10};
    bool hasSwapped;
    int n=10;
    for(int i=0;i<n;i++){
        hasSwapped=false;
        for(int j=0;j<n;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                hasSwapped=true;
            }
        }
        if (!hasSwapped){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}