#include<iostream>
using namespace std;
int linearsearch(int arry[],int n,int key){
    for(int i=0;i<n;i++){

    if(arry[i]==key)

        return i;
    }

    return -1;


}
int main(){
    int n;
     cin>>n;
     int arry[n];
     for(int i=0;i<n;i++)
     {
         cin>>arry[i];

     }
     int key;
     cin>>key;
     cout<<linearsearch(arry,n,key);
     return 0;

}
