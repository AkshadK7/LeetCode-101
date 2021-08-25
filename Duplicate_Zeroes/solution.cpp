#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int> arr = { 1,0,2,3,0,4,5,0 };

        for(int i=0; i<arr.size();++i){
            if(arr[i]==0){
                arr.pop_back();
                arr.insert(arr.begin()+i,0);
                ++i;
            }
        }
   
        for(int i=0; i<arr.size();++i){
            cout<<arr[i]<<" ";
        }


    return 0;
}