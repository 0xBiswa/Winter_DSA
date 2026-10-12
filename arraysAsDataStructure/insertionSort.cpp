#include <iostream>
#include <utility>
using namespace std;
int main(){
    int key,j;
    int arr[5]={6,15,1,478,2};
    for(int i=1;i<5;i++){
        key=arr[i];
        j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0; i<5;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}