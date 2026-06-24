#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n , int k){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        if(arr[low]==arr[mid]==arr[high]){
            low = low + 1;
            high = high - 1;
            continue;
        }
        } 
        // Left Sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=arr[k] && arr[k]<=arr[mid]){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        } 
        // Right Sorted 
        else{
            if(arr[mid]<=k && arr[k]<=arr[high]){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}