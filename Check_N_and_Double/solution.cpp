#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<int> arr{ -2,0,10,-19,4,6,-8 };
    int x=0;
    int n = arr.size();
    int count2 = 0;
    
    int count=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){count2++;}
            for(int j=0; j<arr.size(); j++){
                if((arr[i]!=0)&& (arr[i]*2==arr[j])){
                    cout<<arr[i]<<"  ";
                    count++;
                }
            }
        }
        if((count>0)||(count2>1)){
            cout<<"true";
        }
        else{
            cout<<"false";
        }

    return 0;
}