#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    int n ;
    cout<< "enter the size of array ";
    cin >> n ;
    vector<int >v;
    for (int i=0 ;i<n;i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    bool flag = true ;
    for (int i=0 ;i<v.size();i++)
    {
        for (int j=i+1 ;j<v.size()-1;j++)
        {
            if (v[i] > v[j] ){
                flag = false ;
                break ;
            }
        }
    }
    if (flag == true ) cout << "array is sorted ";
    else cout << "array is not sorted ";
}