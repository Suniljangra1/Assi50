#include<bits/stdc++.h>
using namespace std;
void Fun(char str[], int n)
{
    map<int,int> k;
    for(int i=0; i<n; i++)
    {
        k[str[i]]++;
    }
    int ans=0;
    for(auto it: k)
    {
        int s = it.first;
        int p = it.second;
        // cout<<p;
        if(s==p){
        ans++;}
    }
    cout<<ans;

}
int main()
{
    char str[]={"ceabaacb"};
    int n = sizeof(str)/sizeof(str[0]);
    Fun(str,n);
}