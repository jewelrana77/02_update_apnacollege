#include<iostream>
using namespace std;
int main()
{
    int s=10,t=20;
    int v;
    //10  //9    //19   //20 //9  //19  //10 //20
    v=s-- - s++ + --t - ++t - --s - --t + ++s+ ++t;
    cout<<s<<endl;
    cout<<t<<endl;
    cout<<v<<endl;
    return 0;






    int m=1,n=2,o=3;
    int p;
//1   -//2 -//3
    p=m-- -n-- -o--;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;
    cout<<p<<endl;







    int h=0;
    //0 //1      //1    //0
    h=h++ - h-- + ++h - --h;
    cout<<h<<endl;









    int i=1;
    int j=2;
    int k;
//1//2 //1   //2    //3   //4 //pre increment ++i,++j
//                              post increment i++.j++
    k=i+j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;

}
