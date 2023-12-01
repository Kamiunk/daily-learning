#include<stdio.h>
#include<string.h>
int hex_to_dec(char x[])
{
    int sum=0,a=0,i,j;
    for (i = 0; i < strlen(x); i++)
    {   
        a=0;
        if(x[i]>='0'&&x[i]<='9')
        {
            a=x[i]-'0';
            for(j=strlen(x)-i;j>1;j--)
            {
                a*=16;
            }
        }
        else if(x[i]>='A'&&x[i]<='F')
        {
            a=x[i]-'A'+10;
            for(j=strlen(x)-i;j>1;j--)
            {
                a*=16;
            }
        }
        sum+=a;
    }
    return sum;
    
}
int main()
{
    char hexnum[30];
    int decnum=0;
    printf("Please enter a hexadecimal number:");
    scanf("%s",hexnum);
    decnum=hex_to_dec(hexnum);
    printf("The decimal form of this number:%d\nÎÒÊÇ23¹â4³ÂÅà·á3123006638",decnum);
    
    return 0;
}
