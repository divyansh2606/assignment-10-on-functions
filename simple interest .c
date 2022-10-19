#include<stdio.h>
int interest(int,int,int);
int main()
{
    int s,p,r,t;
    printf("enter principal rate time");
    scanf("%d%d%d",&p,&r,&t);
    s=interest(p,r,t);
    printf("simple interest is%d",s);
    return 0;
}
int interest(int x,int y,int z)
{ int interest;
    interest=x*y*z/100;
    return interest;
}

