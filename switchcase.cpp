#include<bits/stdc++.h>
using namespace std;
int main()
{ int n1,n2;
cout<<"input two number:"<<endl;
cin>>n1>>n2;

char op;
cout<<"input operator"<<endl;
cin>>op;
switch(op)
{
    case '+':
    {
    cout<<n1+n2<<endl;
    break;
    }
    case '/':
    {
    cout<<n1/n2<<endl;
    break;
    }
    case '-':
    {
    cout<<n1-n2<<endl;
    break;
    }
    case '*':
    {
    cout<<n1*n2<<endl;
    break;
    }
    defult:
    {
        cout<<"type another operator"<<endl;
        break;
    }
}
}
