#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the size of array ";
    cin >> n ;
    vector<int>v;
    for (int i=0 ; i<n ; i++)
    {
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int max = -123456;
    for (int i =0 ; i<v.size();i++)
    {
        if (max<v[i] ) max = v[i];
    }
    cout << "largest elelment is " << max << endl ;
    int smax = -123456;
    for (int i=0;i<v.size();i++)
    {
        if ((smax < v[i]) && (v[i] != max)) smax = v[i];
    }
    cout << "second largest element is " << smax << endl ;
    int tmax = -12345;
    for (int i=0 ; i<v.size();i++)
    {
        if ((tmax < v[i])&&(v[i]!=smax)&&(v[i]!=max)) tmax = v[i];

    }
    cout << "third largest number is " << tmax ;
}