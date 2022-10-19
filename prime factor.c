#include<stdio.h>

void primefact(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d,",i);
        }
    }
}

int main()
{
    primefact(36);
    return 0;
}
