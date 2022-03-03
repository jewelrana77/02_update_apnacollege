#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=2;
    while(num>n)

    {
        int div=2;
        if(n%div==0)

        {
            div+=1;
            cout<<div<<endl;
        }
        else

            num+=1;
            cout<<num<<endl;

    }
    return 0;
}
