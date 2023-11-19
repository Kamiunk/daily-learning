#include <iostream>
#include <cmath>
#include<cstring>
using std::cout,std::cin,std::endl;
int main()
{
    int dec;
    char hex[30];
    cin>>hex;
    for(int i=0;i<strlen(hex);i++)
    {
        int a;
        if(hex[i]>='0'&&hex[i]<='9')
        {
            a=hex[i]-'0';
        }
        if(hex[i]>='A'&&hex[i]<='F')
        {
            a=hex[i]-'A'+10;
        }
        dec+=pow(16,strlen(hex)-i-1)*a;
    }
    cout<<dec<<endl;
    return 0;
}
