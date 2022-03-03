#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(j==2*n)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
//    int n;
//    cin>>n;
//    for(int i=0;i<=n;i++)
//    {
//        for(int j=0;j<i;j++)
//        {
//            cout<<i;
//        }
//        cout<<endl;
//    }
//}
}
