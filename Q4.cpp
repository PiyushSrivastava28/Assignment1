#include<iostream>
#include<string.h>
using namespace std;
int encrypt()
{
    int i;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=s[i]+5;
    }
    cout<<"The Encrypted Code is "<<s;
    return 0;
}
int decrypt()
{
    int i;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=s[i]-5;
    }
    cout<<"The Decrypted Code is "<<s;
    return 0;
}
int main()
{
    int i;
    cout<<"If you want to encrypt then PRESS:0\nIf you want to decrypt then PRESS:1"<<endl;
    cin>>i;
    if(i==0)
        encrypt();
    else if(i==1)
        decrypt();
    else
        cout<<"Wrong Choice";
    return 0;
}
