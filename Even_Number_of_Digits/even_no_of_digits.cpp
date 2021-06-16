class Solution {
public:
    int findNumbers(vector<int>& arr) {
        
        int len = arr.size();
        int count = 0;
    
        for(int i=0; i<len; i++)
        {
            string str= to_string(arr[i]);
            int size =  str.length();

            if(size%2==0)
            {
                count = count+1;
            }
        }
    
        //cout<<count;

        return count;
        
    }
};