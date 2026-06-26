#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            ans = min(ans, nums[mid]);
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low = low+1;
            high = high-1;
            continue;
            }
            if(nums[low]<= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
    }
};