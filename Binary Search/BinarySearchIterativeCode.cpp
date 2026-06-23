#include<bits/stdc++.h>
using namespace std;
int search(vector<int> & nums , int target){
    int n = nums.size();
    int low = 0, high = nums.size()-1;
    while(low<=high){
        int mid =(low+high)/2;
        if(nums[mid]==target)
        return mid;
        else if(target>nums[mid]) return low = mid+1;
        else high = mid -1 ;
    }
    return -1;
}