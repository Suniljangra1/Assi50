#include<bits/stdc++.h>
using namespace std;
void Freq(int a[], int n)
{
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[a[i]]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
int main()
{
    int a[]={3,4,4,4,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    Freq(a, n);
}