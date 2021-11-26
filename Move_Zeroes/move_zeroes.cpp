class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp,counter=0;
        int count=0;
        int j = 0;

        for (int i = 0; i < n; i++) {
          if (i < n - 1 && nums[i] ==0) {
              count++;
            continue;
          }

          nums[j++] = nums[i];
        }
 
        for(int i=n-count; i<n; i++){
            nums[i]=0;
        }
        
        for(int i=0; i<n; i++){
             cout<<nums[i];
        }
    }
};