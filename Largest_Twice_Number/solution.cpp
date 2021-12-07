#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector <int> arr {3,6,1,0};
    
    int temp, num=-1, n=arr.size();
        
    if(n==1){
    return 0;
    }
    
    vector <int> arr2 {arr};
    
    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){
                if(arr[j]>arr[i]){
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
            }
        }
    }

   if((arr[0]>=arr[1]*2)){
       
       for(int i=0; i<n; i++){
           if(arr2[i]==arr[0]){
               num = i; 
           }
       }
   }
   
   cout<<num;

    return 0;
}
