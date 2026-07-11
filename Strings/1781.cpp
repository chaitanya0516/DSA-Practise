#include<bits/stdc++.h>
class Solution {

    public:
    int getMinCount(const std::vector<int>& freq){
        int minCount = INT_MAX;
        for (int i = 0; i<26; i++) {
            if(freq[i] > 0){
                minCount = std::min(minCount, freq[i]);
            }
        }
        return minCount;
    }

    public:
    int getMaxCount(const std::vector<int>& freq){
        int maxCount = 0;
        for (int i = 0; i<26; i++) {
            maxCount = std::max(maxCount, freq[i]);
        }
        return maxCount;
    }

    int beautySum(std::string s) {
        int sum = 0;
        for(int i = 0; i< s.length(); i++){
            std::vector<int> freq(26, 0);
            for(int j = i; j< s.length(); j ++){
                freq[s[j] - 'a']++;
                int beauty = getMaxCount(freq) - getMinCount(freq);
                sum+= beauty;
            }
        }
        return sum;
    }
};