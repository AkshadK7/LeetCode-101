class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count=0;
        int count2=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){count2++;}
            for(int j=0; j<arr.size(); j++){
                if((arr[i]!=0)&& (arr[i]*2==arr[j])){
                    //cout<<arr[i]<<"  ";
                    count++;
                }
            }
        }
        if((count>0)||(count2>1)){
            return true;
        }
        else{
            return false;
        }
        
    }
};