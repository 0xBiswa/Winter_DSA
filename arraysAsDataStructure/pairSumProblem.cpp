/**
=============================================================================
ALGORITHM: Two Pointers (Pair Sum in a Sorted Array)
=============================================================================
DESCRIPTION:
  This algorithm finds a pair of elements in a sorted array that add up 
  to a specific target sum. Because the array is guaranteed to be sorted in 
  ascending order, we can solve this highly efficiently without needing 
  nested loops or additional memory.
*/
#include <iostream>
using namespace std;
int main(){
    int target=92, arr[10]={2,7,11,15,22,26,35,48,57,61},sum=0;
    int left=0,right=9;
    while(left<=right){
        sum=arr[left]+arr[right];
        if(sum>target){
            right--;
        }else if(sum<target){
            left++;
        }else{
            break;
        }
    }

    if(sum != target){
        cout << "No such pairs exist";
    }else{
        cout << "The two pais are ( " << arr[left] << " , "<< arr[right]<<" )";
    }
    return 0;


}