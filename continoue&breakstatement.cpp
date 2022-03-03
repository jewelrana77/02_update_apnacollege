#include<bits/stdc++.h>
using namespace std;
int main()

{int pocketmoney;
cin>>pocketmoney;

     for(int date=1;date<30;date++)
{
 if(date%2==0)
 {
     continue;
 }
 if( pocketmoney==0)
 {
     break;
 }
 cout<<"go out today"<<endl;
 pocketmoney=pocketmoney-200;

}
    return 0;
}
