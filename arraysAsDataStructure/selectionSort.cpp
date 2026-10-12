#include <iostream>
using namespace std;
int main(){
    int s;
    int arr[5]={6,15,1,478,2};
    bool swapped=false;
    for(int i=0; i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
                arr[i] = arr[j]+arr[i];
                arr[j] = arr[i]-arr[j];
                arr[i]= arr[i] - arr[j];
            }
        }
    }
    for(int i=0; i<5;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}