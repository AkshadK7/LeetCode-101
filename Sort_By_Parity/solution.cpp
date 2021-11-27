#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int>arr{3,1,2,4};
    
    int n = arr.size();
    
    int temp;
        
    for(int i=0; i<n; i++){
        
        if(arr[i]%2!=0){
        
            for(int j=i+1; j<n; j++){
                if(arr[j]%2==0){
                    temp = arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    break;
                }
             }
        }
    }
        
    for(int i=0; i<n; i++){
         cout<<arr[i];
    }

    return 0;
}