// #include<bits/stdc++.h>
// using namespace std;

// vector<int> sortedArray(vector< int > a , vector<int> b){
//     int n1 = a.size();
//     int n2 = b.size();
//     set<int> st;

//     for(int i = 0;i<n1;i++){
//         st.insert(a[i]);
//     }
//     for(int i = 0;i<n2;i++){
//         st.insert(b[i]);
//     }
//     vector<int> temp;
//     for(auto it : st){
//         temp.push_back(it);
//     }
//     return temp;
// }

// int main(){
//     vector<int> arr1 = {1,2,3,3,4,5};
//     vector<int> arr2 = {2,3,3,4,4,6};

//     vector<int>result = sortedArray(arr1 , arr2);
//     for(int x : result){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Optimal
#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int>a, vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0|| unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size()==0|| unionArr.back()!=b[j]){
                unionArr.push_back(b[i]);
            }
            j++; 
        }
    }
    while(j<n2){
        if(unionArr.size()==0|| unionArr.back()!=b[j]){
                unionArr.push_back(b[i]);
            }
            j++; 
    }

    while(i< n1){
        if(unionArr.size()==0|| unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++; 
        }
        return unionArr;
    }