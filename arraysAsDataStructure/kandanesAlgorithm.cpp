/**
=============================================================================
ALGORITHM: Kadane's Algorithm
=============================================================================
DESCRIPTION:
  Kadane's algorithm is an efficient way to solve the "Maximum Subarray Sum"
  problem. Given an integer array, it finds the contiguous subarray 
  (containing at least one number) which has the largest sum and returns 
  that sum.

COMPLEXITY:
  - Time Complexity: O(N) where N is the length of the array. It only
    requires a single pass through the elements.
  - Space Complexity: O(1). It only uses two variables to store the
    running sum and the maximum sum.

HOW IT WORKS (The Intuition):
  The core idea is to maintain a running sum (`current_max`) of the current 
  subarray. As you iterate through the array, you ask at each step:
  "Is it better to add the current element to my existing subarray, or 
  should I start a brand new subarray starting with this current element?"
  
  If the previous running sum drops below zero, it will only drag down the 
  value of the next element. Therefore, you discard it and start fresh.
  Simultaneously, you keep track of the highest sum seen so far (`global_max`).

EDGE CASES HANDLED:
  By initializing the variables to the first element (rather than 0), 
  the algorithm gracefully handles arrays comprised entirely of negative 
  numbers (returning the smallest negative number instead of 0).
=============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[]={-5, 8, -2, 1, 4, -3, 2, -1, 5, -7};
    int maxSum=arr[0],currentSum=0;
    for(int i=0;i<10;i++){
        currentSum+=arr[i];
        maxSum=max(maxSum,currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout << "Maximum Sum Of A Subarray is " << maxSum;
}