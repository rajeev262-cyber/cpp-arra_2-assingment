#include<iostream>
#include<vector>
using namespace std ; 
int main ()
{
    int n ;
    cout<< "enter the size of array ";
    cin >> n ;
    vector<int>v ;
    for (int i=0 ; i<n ; i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int even = 0 ;
    int odd = 0;
    for (int i=0 ; i<v.size();i++)
    {
        if (i%2==0) even = even + v[i];
        else odd = odd + v[i]; 
    }
    cout << "required answer is " << even - odd ;
}