// #include<bits/stdc++.h>
// using namespace std;

// string read(int n, vector<int> book, int target){
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         int a = book[i];
//         int more = target - a;
//         if(mpp.find(more) != mpp.end()){
//             return "Yes";
//         }
//         mpp[a] = i;
//     }
//     return "NO";
// }
// int main(){
//     vector<int> books = {3,2,4};
//     int target = 6;
//     int n = books.size();
//     cout<<read(n,books,target)<<endl;
//     return 0;
// }

//Optimal

#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){
    int left = 0 , right = n-1;
    sort(book.begin(),book.end());
    while(left<right){
        int sum = book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";
}

int main(){
    vector<int> books = {1,2,3,4,6,5};
    int target = 10;
    int n = books.size();
    cout<<read(n,books,target)<<endl;
    return 0;
 }
