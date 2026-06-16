#include<bits/stdc++.h>
using namespace std;

long long maxSubaaraySum(int arr[], int n){
    long long sum = 0, maxi = LONG_MIN;
    for(int i = 0;i<n;i++){
        sum +=arr[i];
        //  if(sum == 0) start = i;
        if(sum > maxi){
            maxi = sum;
        // ansStart= start , ansEnd = i
        }
        if(sum < 0){
            sum = 0;
        }
        if(maxi<0){
            return 0;  
        }
    }
    return maxi;
}