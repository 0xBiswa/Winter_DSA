#include <iostream>
using namespace std;

int main(){
    int arr[10]={148,5,51,3,65,15,21,65,7,9};
    int size = 10;
    bool swapped;
    for(int i=0;i<size;i++){
        swapped=false;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j+1]=arr[j+1] + arr[j];
                arr[j] = arr[j+1] - arr[j];
                arr[j+1] = arr[j+1] - arr[j]; // Can alternatively use swap method of utility library to overcome integer overflow errors
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int i=0; i<size;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}