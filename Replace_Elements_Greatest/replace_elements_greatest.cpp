#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
    int main()
    {
        vector<int> arr{17,18,5,4,6,1};
        int max=0;
        int n = arr.size();
        
        for(int i=0; i<=n; i++){
            
            for(int j=i+1; j<n; j++){
                if(arr[j]>max){
                    max=arr[j];
                    
                }
            }
            if(max>0){
                arr[i]=max;
                max=0;
            }
            }

        arr[n-1] = -1;
        for(int i=0;i<n;i++){cout<<arr[i]<<" ";}

    return 0;
}