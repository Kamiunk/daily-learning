#include<stdio.h>
int main()
{
    int m,n,location[100][1000],k,sum=0,storage[100000]={0};
    scanf_s("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            location[i][j]=i*n+j;
        }
    }
    scanf_s("%d",&k);
    for(int i=0;i<k;i++)
    {
        int a,b;
        scanf_s("%d %d",&a,&b);
        for (int j = 0; j <k; j++)
        {
            if(storage[j]==a||storage[j]==b)
            {
                
            }
        }

    }

    return 0;
}