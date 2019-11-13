#include<stdio.h>
int main(void)
{
    int a,x=0,y=1,b;
    printf("fibonacci series");
    printf("\n\n %d\t%d,x,y");
    for (a=1; a<9; a++)
    {
        b=x+y;
        printf("\n\n%d",b);
        x=y;
        y=b;

    }
}
