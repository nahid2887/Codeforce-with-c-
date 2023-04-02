#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y=0;
    int a[]={5,4,3,2,1};
    cin>>x;

   for(int i=0 ; i<5 ; i++)
   {
       y+=(x/a[i]);
       x=x%a[i];

   }
   cout<<y<<endl;
}
