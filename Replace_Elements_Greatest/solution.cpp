class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
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
        return arr;
        
    }
};