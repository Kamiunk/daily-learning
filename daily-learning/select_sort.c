#include<stdio.h>
void Selet_Sort(int*x)
{
    int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j <10 ; j++)
        {
            if(*(x+i)>*(x+j))
            {
                temp=*(x+j);
                *(x+j)=*(x+i);
                *(x+i)=temp;
            }
        }
        
    }
    
}
int main()
{
    int nums[10];
    printf("input 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&nums[i]);
    }
    Selet_Sort(nums);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("我是23光四陈培丰3123006638");
    return 0;
}