#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,num=0,lw=0,up=0,sp=0,oth=0;
    char text[3][80];
    for(i=0;i<3;i++)
    {
        gets(text[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0;j<strlen(text[i]); j++)
        {
            if(text[i][j]>='0'&&text[i][j]<='9')num++;
            else if(text[i][j]>='a'&&text[i][j]<='z')lw++;
            else if(text[i][j]>='A'&&text[i][j]<='Z')up++;
            else if(text[i][j]==' ')sp++;
            else oth++;
        }
    }
    printf("英文大写字母%d个，小写字母%d个，数字%d个,空格%d个，其他字符%d个\n",up,lw,num,sp,oth);
    printf("我是23光四陈培丰3123006638");
    return 0;
}