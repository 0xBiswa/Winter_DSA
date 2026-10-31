#include <iostream>
using namespace std;
int main(){
    int target,arr[10]={1,1,3,4,5,10,56,78,254,752};
    cout << "Enter the number you want to find : ";
    cin >> target;
    cin.get();
    int left=0, right=9,mid;
    while(left<right){
        mid=(left+right)/2;
        if(arr[mid]==target){
            cout << "Target found at index: " << mid;
            return 0;
        }else if(arr[mid]>target){
            right=mid;
        }else{
            left=mid;
        }
    }
    cout << "Target not found";
    return 0;
}