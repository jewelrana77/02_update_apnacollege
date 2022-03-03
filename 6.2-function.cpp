#include<iostream>
using namespace std;
//void num(int num)
//{
//    cout<<num<<endl;
//    return 0;
//}
int add(int num1,int num2)
{

    int sum=num1+num2;
    return sum;
}
int main()
{int a,b;
cin>>a>>b;
cout<<add(a,b)<<endl;
    return 0;
}
