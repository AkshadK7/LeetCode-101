class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        
        int len = arr.size();
        int temp = 0;
        //int arr2[len-1];
        vector<int> arr2(len);
        
        for(int i=0; i<len; i++)
        {
            arr2[i]=arr[i]*arr[i];
        }
        
        sort(arr2.begin(), arr2.end());

        return arr2;
        
        
    }
};