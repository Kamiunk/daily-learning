#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int j=0;
    scanf("%d",&num);
    if(num==1)
    {
        printf("Please input a bigger number:");
        scanf("%d",&num);
    }
    for (int i=2;i<= sqrt(num);i++)
    {
        if(num/i==0)
        {
            j++;
            break;
        }
        else
        {
            continue;
        }
    }
    if(j==0)printf("The number is sushu");
    return 0;
}