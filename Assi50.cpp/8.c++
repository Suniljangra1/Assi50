// create a map using subscript operator and assignement operator 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> m;
   
    m[2]=20;
    m[1]=10;
    m[3]=30;
    m[4]=40;
    m[5]=60;
    for(auto it: m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}