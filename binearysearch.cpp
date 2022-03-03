#include<iostream>
using namespace std;
int binarysearch(int arry[],int n,int key)
{

    int s=0;
    int e=n;
    while(s<=e)
    {int mid;
        mid=(s+n)/2;
        if(arry[mid]==key)
        {
            return mid;
        }
        else if(arry[mid]>key)
        {
            e=mid-1;

        }
        else
        {


            s=mid+1;
        }


    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];

    }
    int key;
    cin>>key;
    cout<<binarysearch(arry,n,key);
}
