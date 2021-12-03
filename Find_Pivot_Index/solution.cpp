#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> arr {1,7,3,6,5,6};
    
    int ele, num=-1, left_sum = 0, right_sum = 0;
        
    for(int i=0; i<arr.size(); i++){
        
        if(i==0){ele = 0;}
        else{ele = arr[i-1];}
        left_sum = left_sum+ele;
        
        
        
        for(int j=i+1; j<arr.size(); j++){
            right_sum = right_sum+arr[j];
        }
        
        cout<<" left: "<<left_sum;
        cout<<" right: "<<right_sum;
        
    if(left_sum==right_sum){
        num = i;
        cout<<" EQUAL: "<<i;
    break;
    }
    else{ right_sum=0; }
    }
    
    cout<<endl<<"Output: "<<num;

    return 0;
}