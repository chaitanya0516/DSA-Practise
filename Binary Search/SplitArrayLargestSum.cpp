#include<bits/stdc++.h>
using namespace std;
int countSubarrayRequired(vector<int> &arr,int maxSum){
    int k = 1;
    int currentSum = 0;
    for(int i = 0;i<arr.size();i++){
        if(currentSum+arr[i]<=maxSum){
            currentSum+=arr[i];
        }
        else{
            k++;
            currentSum = arr[i];
        }
    }
    return k;
}

int splitArray(vector<int> &arr, int n , int k){
    if(k>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = low+(high-low)/2;
        int subarrayNeeded = (countSubarrayRequired(arr,mid));
            if(subarrayNeeded <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    return low;
}


