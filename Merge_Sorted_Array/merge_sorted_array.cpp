class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         nums1.resize(nums1.size()-n);
          
         for(int i=0;i<(nums2.size());i++){
              nums1.push_back(nums2[i]);
          } 

          sort(nums1.begin(), nums1.end());

          for(int i=0;i<(nums1.size());i++){
              cout<<nums1[i];
          }
    }
};