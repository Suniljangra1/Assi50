#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={2,2,5,50,1};
    int n= sizeof(ar)/sizeof(ar[0]);
   int  max =0;
    for(int i=0;i<n ; i++)
    {
        if(ar[i] > max)
        max = ar[i];
    }
    unordered_map<int,int> u;
    for(int i=0;i<n; i++)
    {
        u[ar[i]]++;
    }
    int a[10];
    for(auto it : u)
    {
        cout<<it.first<<"->"<<it.second<<endl;    
    }
    cout<<"\nMax Value is  "<<max ;

}