#include<stdio.h>
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int fact(int n)
{
int i,fact=1;
for(i=1;n>=i;n--)
{
   fact=fact*n;
}
return fact;
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    printf("%d",perm(5,2));
    return 0;
}

