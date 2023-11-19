#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    int j=0;
    scanf("%f",&num);
    if(num==1)
    {
        printf("请输入大于1的整数");
        scanf("%f",&num);
    }
    for (int i=2;i<= sqrtf(num);i++)
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
    if(j==0)printf("%.0f",num);
    return 0;
}