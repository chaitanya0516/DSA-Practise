#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    bool isSorted = true;
    for(int i =1; i<n;i++){
    if(arr[i]<arr[i-1]){
        isSorted = false;
        break;
    }
}
if(isSorted){
    cout<<"The array is sorted"<<endl;
}
else{
    cout<<"The array is not sorted"<<endl;
}
return 0;

}