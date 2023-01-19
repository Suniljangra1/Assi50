// using copy constructor 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> one ;
    one.insert(make_pair(1,10));
    one[2] = 20;
    one[3] = 40;
    one[4] = 50;
    one[5] = 60;
    unordered_map<int,int> two(one);
    for(auto it: two)
    {
        cout<<it.first<<" -> "<<it.second;
        cout<<endl;
    }
}