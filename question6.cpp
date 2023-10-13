#include<iostream>
#include<vector>
using namespace std ;
int main (){
    vector<int>v;
    v.push_back(9);
    v.push_back(9);
    v.push_back(8);
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(6);
    
  for (int i=0 ; i<v.size();i++)
  {
    int count = 0 ;
    for (int j=0 ; j< v.size();j++)
    {
        if (v[i]==v[j] && i!=j) count ++ ;
    }
    if (count==0){
        cout<< v[i];
    }
    
  }
  
}