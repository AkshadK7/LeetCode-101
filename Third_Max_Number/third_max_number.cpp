class Solution {
public:
    int thirdMax(vector<int>& arr) {
        
        int n = arr.size();
        int temp, x = 0, count=0;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[j]>arr[i]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    
                    
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
          if (i < n - 1 && arr[i] == arr[i + 1]) {
              count++;
            continue;
          }

          arr[x++] = arr[i];
        }
        
        n = n-count;
        
        if(n>=3){return arr[2];}
        else{return arr[0];}
        
    }
};