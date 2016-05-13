#include <stdio.h>
int main()
{
    int i,j,space,rows=10,k=0;
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
        printf("\n");
    }
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
    printf("\n");
    }
     for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
    return 0;
}