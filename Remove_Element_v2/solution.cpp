#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums{ 0,1,2,2,3,0,4,2 };
    int counter = 0;
    int val = 2;
    int n=nums.size();
    int a=0;
    
    //replace the other numbers in place of val and push all the val to the end
    
    for(int i=0;i<n;i++){ 
        if(nums[i]!=val){
            swap(nums[i],nums[a]);
            a++;
        }
    }
    
    int k=0;
    
    //check for the first instance of val in the array and return the result
    
    for(int i=0;i<n;i++){
        if(nums[i]==val){
            break;
        }
        else{
            cout<<nums[i]<<" ";
            k++;
        }
    }
    
    return 0;
}