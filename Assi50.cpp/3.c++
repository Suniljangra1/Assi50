#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st="Love from Haryana";
    unordered_map<char,int> s;
    for(int i=0;i<st.length()-1; i++)
    {
        if(s.find(st[i])==s.end())
        {
            s.insert(make_pair(st[i],1));
        }
        else
        s[st[i]]++;
    }
    for(auto it:s)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}