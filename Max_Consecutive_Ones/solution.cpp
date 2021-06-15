#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1,1,0,1,1,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num=0;
    int max = 0;  // To store the count of max consecutive ones
    
    for(int i=0; i<len; i++)
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
    
    cout<< max;
    return 0;
}