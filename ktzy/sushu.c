#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,j=0;
    printf("Please input an integer:");
    scanf("%d",&num);
    if(num==1)
    {
        while(1)
        {
            printf("Please input a bigger integer:");
            scanf("%d",&num);
            if(num>1)break;
        }
    }
    for (i=2;i<= sqrt(num);i++)
    {
        if(num%i==0)
        {
            j++;
            break;
        }
        else
        {
            continue;
        }
    }
    if(j==0)printf("The number is prime number");
    else printf("The number is not a prime number");
    printf("\n我是23光电4班陈培丰3123006638"); 
    return 0;
}
