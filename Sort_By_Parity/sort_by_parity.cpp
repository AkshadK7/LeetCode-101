class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        
        int n = arr.size();
        int temp;
        
        for(int i=0; i<n; i++){
            
            if(arr[i]%2!=0){
            
                for(int j=i+1; j<n; j++){
                    if(arr[j]%2==0){
                        cout<<arr[j];
                        temp = arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                        break;
                    }
                 }
            }
        }
        
        return arr;
    }
};