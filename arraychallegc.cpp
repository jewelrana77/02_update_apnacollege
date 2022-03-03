#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0; i<n;i++)
{

}


}
// sum of a subarray
//  1 2 0 7 2
// 1 3 3 10 12 2 2 9 11 0 7 2 7 2 2

int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    int curr=0;
    for(int j=i;j<n;j++)
    {
        curr+=a[j];
        cout<<curr<<endl;
    }
}
    return 0;
}









//mx array define
// 1 0 5 4 6 8
// 1 1 5 5 6 8
//  ()
int main {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int mx=-199999;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx;

    }
}
