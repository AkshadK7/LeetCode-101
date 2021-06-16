#include <iostream>
#include<string>
using namespace std;

int main()
{
    int arr[] = {12,345,2,6,7896};
    int len = sizeof(arr)/sizeof(arr[0]);
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
    
    cout<<count;

    return 0;
}