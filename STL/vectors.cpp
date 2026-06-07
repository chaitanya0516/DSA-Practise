#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void explainVector(){
    // 1. A standar vector of integers
   vector<int>v;
   v.push_back(1);
   v.emplace_back(2);
     
    //2. A vector that stores pair of integers    
   vector<pair<int,int>>vec;
   vec.push_back({1 ,2});
   vec.emplace_back(1 , 2);

    //3. Creating a vector with 5 elements,all initializes to 100    
   vector<int> v_filled(5,100);

    //4. Creating a vector with 5 elements,all initializes to 20    
   vector<int> v_custom(5,20);

    //5. Copying a vector into a new one    
   vector<int> v2(v_custom);
}


int main(){
    explainVector();
    return 0;
}