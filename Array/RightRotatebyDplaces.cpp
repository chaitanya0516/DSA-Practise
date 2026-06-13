#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int n ,int d){
    d = d%n;
   reverse(arr,arr+(n-d));
   reverse(arr+(n-d),arr+n);
   reverse(arr,arr+n);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rightRotate(arr,n, d);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
