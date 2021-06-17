#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-4,-1,0,3,10};
    int temp = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    int arr2[len-1];
    
    for(int i=0; i<len; i++)
    {
        arr2[i]=arr[i]*arr[i];
    }
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(arr2[j]>arr2[i])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    
    for(int i=0; i<len; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}