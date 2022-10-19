
#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    natural(n);

    return 0;
}
void natural(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d ",i);
}

