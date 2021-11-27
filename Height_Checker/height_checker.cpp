class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int n = arr.size();
        int temp, count=0;
        vector<int> arr2{arr};
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
        for(int i=0; i<n; i++){
          
            if(arr2[i]!=arr[i]){
                count++;
            }
              
          
        }

        return count;
    }
};