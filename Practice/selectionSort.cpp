#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int arr[10]={1,254,3,5,78,56,752,1,4,10};
    int min;
    for (int i = 0; i < 10; i++)
    {
        min=i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<< " ";
    }
    
    return 0;
}
