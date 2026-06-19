#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pascalTriangle(int N){
    vector<vector<int>> ans;
    for(int i = 1; i<=N;i++){
        long long val = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1;col<i;col++){
            val = val * (i - col);
            val = val / (col);
            ansRow.push_back(val);
        }
        ans.push_back(ansRow);
    }
    return ans;
}