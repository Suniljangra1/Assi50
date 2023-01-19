#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> u;
    u.insert({0,36});
    u.insert({1,36});
    u.insert({2,6});
    u.insert({3,66});
    u.insert({4,25});
    u.insert({5,96});
    int key = 2;
    auto s = u.find(key);
    if(s!=u.end())
    cout<<"Element Founded "<<s->second;
    else 
    cout<<"Element Not found ";
}