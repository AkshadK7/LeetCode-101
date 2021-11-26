class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        int n = size(nums);
        
        int j = 0;

        for (int i = 0; i < n; i++) {
          if (i < n - 1 && nums[i] == nums[i + 1]) {
            continue;
          }

          nums[j++] = nums[i];
        }

        return j;
      }
        
    
};