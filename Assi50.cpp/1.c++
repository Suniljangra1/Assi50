#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> s;
    s.insert({0,10});   // Method one  using insert function 
    s.insert({1,20});
    s.insert({2,20});
    s.insert({4,65});
    s.insert({3,30});
    s.insert(make_pair<int,int>(10,15));   // Method two using make_pair function 
    s[12] = 32;   // Method three  it is like a string 😁
    // unordered_map<int,int>::iterator it;
    for(auto it:s)
    {
        cout<<"Key -> " <<it.first<<" Value -> "<<it.second<<endl;
    }
}