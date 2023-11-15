#include<stdio.h>
typedef struct abc
    {
        int nmus[20];
        int a;
        char b[20];

    }abc;
    struct cba
    {
        abc s1;
        char*s2;
    };
void Print1(struct cba*ps)
{
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d",ps->s1.nmus[i]);
        
    }
    printf("\n");
    printf("%d\n",ps->s1.a);
    printf("%s\n",ps->s1.b);
    printf("%s\n",ps->s1.b);
    printf("%s",ps->s2);
    
}
int main()
{
    char arr[]="wcsndm"; 
    struct cba s={{{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},100,"cnmd"},arr};
    printf("%s\n",s.s2);
    printf("%s",arr);
    Print1(&s);
    return 0;
}