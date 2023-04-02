#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,r,s=0,p;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
         r=i*k;
         s=s+r;
         r=0;
    }
   if (n>s)
   {
       cout<<0;
   }
    else
    {


    p=s-n;
    cout<<p<<endl;
    }
}
