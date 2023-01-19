#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=n/2; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    
    unordered_map<int,int> m;
    for(int i=20;i>=5;i--){
    if(isPrime(i))
      m.insert({i,i+6});
    }
    for(auto it : m)
    {
        cout<<"( "<<it.first<<" -> "<<it.second<<" )"<<endl;
    }
}