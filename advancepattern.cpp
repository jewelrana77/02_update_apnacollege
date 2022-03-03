#include<bits/stdc++.h>
using namespace std;
int main()
{


    int y;
    cin>>y;
    for(int i=1; )




    int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    for(int j=1;j<t-i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" " ;
    }
    cout<<endl;
}






     int k;
cin>>k;
for(int i=1;i<=k;i++)
{
    for(int j=1;j<=k-i;j++)
    {
       cout<<" ";
    }
     for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
    cout<<endl;
}




    int m;
cin>>m;
for(int i=1;i<=m;i++)

{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}


    int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1-i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}

}
