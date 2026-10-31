#include <iostream>
using namespace std;
int main(){
    int arr[10]={254,1,3,5,78,56,752,1,4,10};
    int j,temp;
    for (int i = 1; i < 10; i++)
    {   
        temp=arr[i];
        j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }else{
                break;
            }

        }
        arr[j+1]=temp;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<< " ";
    }
    
} 
