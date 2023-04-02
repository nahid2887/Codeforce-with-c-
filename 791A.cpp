#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int x,y,z=0;
    cin>>x>>y;
    while(x<=y)
    {
        x=3*x;
        y=2*y;
        z=z+1;

    }
    cout<<z<<endl;
 }

