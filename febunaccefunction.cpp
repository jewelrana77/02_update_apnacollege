#include<iostream>
using namespace std;
void fib(int n)
{int t1=0;
int t2=1;
int nexttearm;
for(int i=0;i<n;i++)
{  cout<<t1<<endl;
    nexttearm=t1+t2;

    t2=nexttearm;
     t1=t2;

}
return ;

}
int main()
{int n;
cin>>n;
fib(n);
    return 0;
}
