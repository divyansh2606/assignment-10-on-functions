#include<stdio.h>
int evenodd(int);
int main()
{
    int s,n;
    printf("enter no");
    scanf("%d",&n);
    s=evenodd(n);
    printf("no is %d",s);
    return 0;
}
int evenodd(int x)
{
    if(x%2==0)
        x=1;
    else
        x=0;
    return x;
}

