#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the  target ";
    cin >> n ;
    int x ;
    cout << "enter the element number of vector ";
    cin >> x ;
    vector<int>v;
    for (int i=0 ; i<x;i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int a = 0 ;
    for (int i=0 ; i<v.size();i++)
    {
        if (v[i] > x)  a++; 
    }
    cout<< a ;
}