#include <iostream>
#include <string.h>
using namespace std;
int main()
{
        char str1[20], str2[20];
        int i, j, len = 0, flag = 0;
        cout << "Enter the string : ";
        cin >>str1;
        len = strlen(str1) - 1;
        for (i = len, j = 0; i >=j ; i--, j++)
        {
              if( str1[j]!=str1[i])
                   flag=1 ;
        }
        if (flag == 1)
            cout << str1 << " is not a palindrome";
        else
            cout << str1 << " is a palindrome";
        return 0;
}
