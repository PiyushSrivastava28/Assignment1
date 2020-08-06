#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,x,a,b;
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The prime numbers between a and b are :"<<endl;
    for(i=a+1;i<b;i++)
    {
        x=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            x++;
        }
        if(x==0)
            cout<<i<<endl;
    }
    return 0;
}
