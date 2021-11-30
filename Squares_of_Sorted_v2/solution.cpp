#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = { 2,2,3,1 };
    int n = arr.size();
        
    for(int i = 0; i < arr.size(); i++){
        arr[i] *= arr[i];
    }
    
    sort(arr.begin(), arr.end());
            
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i];
    }

    return 0;
}