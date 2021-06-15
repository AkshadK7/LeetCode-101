class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
    
        int len = arr.size();
        int num=0;
        int max = 0;  
        
        for(int i=0;i<len;i++)
        {
            if(arr[i]==1)
            {
                num = num+1;
            }

            else
            {
                if(num>max)
                {
                    max = num;
                }
                num = 0;
            }

            if(i==len-1)
            {
                if(num>max)
                {
                    max = num;
                }

            }
            
        }   
        //cout<< max;
    
        return max;
    }
};