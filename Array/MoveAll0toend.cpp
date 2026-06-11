// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     vector<int> temp;
//     // 1. Separate non-zeros into temp vector
//     for(int i = 0; i < n; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int nz = temp.size();
    
//     // 2. Copy non-zeros back to the original array
//     for(int i = 0; i < nz; i++){
//         arr[i] = temp[i];
//     }

//     // 3. Fill the rest of the array with zeros
//     for(int i = nz; i < n; i++){
//         arr[i] = 0;
//     }
    
//     // 4. Print the final result
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

//Optimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j!=-1){
    for(int i = j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}
