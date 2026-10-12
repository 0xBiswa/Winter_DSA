#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,25,26,35,38,39,45,47,148,245},target=47;
    int n=10,left=0,right=n-1,mid;
    while(left<right){
        mid=(left+right)/2;
        if(arr[mid]<target){
            left=mid;
        }else if(arr[mid]>target){
            right=mid;
        }else{
            break;
        }
    }
    cout << "Index is " <<mid;
}