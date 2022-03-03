#include<iostream>
using namespace std;
// 12 56 34 67 8
//8 12 34 56 67
int main()
{
    int n;
    cin>>n;
    int arry[n];
    for(int i=0; i<n; i++ )
    {
        cin>>arry[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arry[j]<arry[i])
            {
                int temp=arry[j];
                arry[j]=arry[i];
                arry[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arry[i]<<endl;
    }


}

