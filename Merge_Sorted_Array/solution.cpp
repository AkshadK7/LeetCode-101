#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> nums1{ 1,2,3,0,0,0 };
        int m = 3;
        
    vector<int> nums2{ 2,5,6 };
        int n = 3;
          
         nums1.resize(nums1.size()-n);        // remove last n elements from nums1
          
         for(int i=0;i<(nums2.size());i++){   // insert nums2 elements to nums1 from the end
              nums1.push_back(nums2[i]);
          } 
          
          sort(nums1.begin(), nums1.end());   // sort the final array
          
          for(int i=0;i<(nums1.size());i++){
              cout<<nums1[i];
          } 
 
    return 0;
}




          


