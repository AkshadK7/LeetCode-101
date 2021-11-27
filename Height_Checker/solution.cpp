#include <iostream>

using namespace std;

int main()
{
    vector<int>arr{1,1,4,2,1,3};
    
    int n = arr.size();
        int temp, count=0;
        vector<int> arr2{arr};
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
        for(int i=0; i<n; i++){
          
            if(arr2[i]!=arr[i]){
                count++;
            }
              
          
        }
        
    cout<<count;

    return 0;
}