#include<iostream>
using namespace std;

// void explainPair(){
//      pair<int, int> p = {1,3};

//     cout << p.first << " " << p.second;
// }

// void explainPair() {
//     pair<int, pair<int,  int>> p = {1,{3,4}};
//     cout<< p.first << " " << p.second.second << " " << p.second.first;
// }


void explainPair(){
    pair<int, int> arr[] = { {1,2},{2,5},{5,1}};
    cout<< arr[1].second;
}


int main(){
    explainPair();
    return 0;
}