    #include<stdio.h>
    void cr(int*x,int size)
    {
        int temp;
        for(int i=1;i<size;i++)
        {
            temp=*(x+i);
            while(i>0)
            {
                if(*(x+i-1)>temp)
                {
                    *(x+i)=*(x+i-1);
                    i--;
                }
                else
                {
                    break;
                }
            }
            *(x+i)=temp;
        }
    }
    int main()
    {
        int a[10]={3,2,1,4,5,6,7,8,9,0},b=10;
        cr(a,b);
        for (int i = 0; i < 10; i++)
        {
            printf("%d",a[i]);
        }
        
        return 0;
    }
    