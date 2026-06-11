#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int foundIndex = -1;
    for(int i =0;i<n;i++){
        if(arr[i]==num){
            foundIndex = i;
            break;
        }
    }
    cout<< foundIndex<< endl;
    return 0;
}