#include<stdio.h>
void odd(int);
int main()
{
    int n;
    odd(7);

    return 0;
}
void odd(int x)
    {
        int i;
        for(i=1;i<=x;i++)
        printf("%d ",2*i-1);
    }



