#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0) return 0;

        int i = 0;
        while(i<s.size() && s[i]== ' '){
            i++;
        }
        if(i == s.size()) return 0;

        s = s.substr(i);

        int sign = +1;
        int start = 0;

        if(s[0] == '-') {
            sign = -1;
            start = 1;
        } else if (s[0] == '+') {
            start = 1;
        }

        long ans = 0;
        int MAX = INT_MAX, MIN = INT_MIN;

        for (int j = start; j < s.size(); j++) {
            if (!isdigit(s[j])) break; 

        ans = ans * 10 + s[j]-'0';
        if(sign == -1 && -1*ans<MIN) return MIN;
        if(sign == 1 && ans > MAX) return MAX;
        }
    return (int)(sign*ans);
    }
};