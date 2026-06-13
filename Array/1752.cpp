// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int pivot = 0;
//         for(int i = 0 ;i<n-1;i++){
//             if(nums[i]>nums[i+1]){
//             pivot=i+1;
//             break;
//             }
//         } 
//         if(pivot==0) return true;

//         reverse(nums.begin(),nums.begin()+pivot);
//         reverse(nums.begin()+pivot,nums.end());
//         reverse(nums.begin(),nums.end());

//         for(int i = 0;i<n-1;i++){
//             if(nums[i]>nums[i+1]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };