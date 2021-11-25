#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {

    vector <int> A = {1,2,3,4,5,6,4,3,2,1};
        
        if(A.size() < 3) return false;
        int i = 1;
        while(i < A.size() && A[i] > A[i-1]){
            i++;
        }
        //i == 1 means A[1] <= A[0]
        //while loop terminate because the array has been scanned
        if(i == 1 || i == A.size()) return false;
        
        while(i < A.size() && A[i] < A[i-1]){
            i++;
        }
        //while loop terminate because the array has been scanned
        if(i == A.size()){cout<<"true";}
        //while loop terminate because A[i] < A[i-1] not holds
        else{cout<<"false";}
    }