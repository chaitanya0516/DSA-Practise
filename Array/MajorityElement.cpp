#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
    mpp[v[i]]++;
    } 
for(auto it:mpp){
    if(it.second>(v.size()/2)){
        return it.first;
    }
}
    return -1;
}

int main(){
    vector<int> arr={2,2,3,3,1,2,2};
    int v = arr.size();
    int ans = majorityElement(arr);
    cout<<"The majority Element >n/2 : " << ans << endl;
} 

