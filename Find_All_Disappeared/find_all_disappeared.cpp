class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        
        vector<int> mis;
 
        for (int i = 0; i < arr.size(); i++) {

            int temp = abs(arr[i]) - 1;

            arr[temp] = arr[temp] > 0 ? -arr[temp] : arr[temp];
        }
        for (int i = 0; i < arr.size(); i++)
            
            if (arr[i] > 0)
                mis.push_back(i + 1);
 
        return mis;
        
    }
};