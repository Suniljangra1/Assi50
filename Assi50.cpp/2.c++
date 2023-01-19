#include<bits/stdc++.h>
using namespace std;
void Find_Repeted(string a)
{
    string M="",N="";
    unordered_map<string,int> D;
    for(int i=0;i<a.length()-1; i++)
    {
       if(a[i]!=' ')
       {
         M = M+a[i];
       }
       else
       {
        D[M]++;
        if(D[M]>1)
        N = M;
        M = "";
       }
    }
        D[M]++;
        if(D[M]>1)
        N = M;

    if(N!="")
    {
        for(auto it:N)
        {
            cout<<it;
        }
    }
    else 
    cout<<"No Repetation ";
}
int main()
{
    char count;
    string a="Ravi had been saying that he had  there",ST2;
    Find_Repeted(a);
   
   }
