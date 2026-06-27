#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> &arr , int day, int m ,int k){
    int cnt = 0;
    int noOfB = 0;
    for(int bloomDay: arr){
        if(bloomDay<=day){
            cnt++;
        }
        else{
            noOfB+= (cnt/k);
            cnt = 0;
        }
    }
    noOfB += (cnt/k);
    return noOfB>=m; 
}

int flowers(vector<int>& arr,int m, int k){
    if(arr.size()<m*k) return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0;i<arr.size();i++){
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }
    int low = mini, high = maxi;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(possible(arr,mid,m,k)){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}