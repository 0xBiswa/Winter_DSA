#include <iostream>
#include <utility>

using namespace std;

void printArray(int arr[]){
    cout << "Here are the elements: " <<endl;
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<endl;
    }
}

void quickSort(int arr[],int start, int end){
    int i=start-1,j=start,pivot=arr[end];
    if(start>=end) return;
    for(;j<end;j++){
        if(arr[j]>=pivot){
            continue;
        }
        i++;
        swap(arr[i],arr[j]);
    }
    i++;
    swap(arr[j],arr[i]);
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,end);
}

int main(){
    int arr[10]={148,5,51,3,65,15,21,65,7,22};
    quickSort(arr,0,9);
    printArray(arr);
    return 0;
}