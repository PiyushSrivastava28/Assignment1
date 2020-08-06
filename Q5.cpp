#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,m,j;
    string s;
    cout<<"Enter the String:";
    cin>>s;
    cout<<"The Encrypted String is : ";
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>=65)&&(s[i]<91))
            m=(int)(s[i]-64);
        else if((s[i]>=97)&&(s[i]<123))
            m=(int)(s[i]-96);
        if(m%2==0)
        {
            for(j=1;j<=m;j++)
            {
                cout<<"$";
            }
        }
        else
        {
            for(j=1;j<=m;j++)
            {
                cout<<"#";
            }
        }
    }
    return 0;
}
