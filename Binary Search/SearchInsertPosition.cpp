#include<bits/stdc++.h>
using namespace std;
int searchVector(vector<int>& arr ,int x){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            // maybe an answer
            high = mid - 1;
        }
        else{
    low = mid + 1; // look fo r right 
        }
    }
    return ans;
}