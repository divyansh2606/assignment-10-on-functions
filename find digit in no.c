#include<stdio.h>
int find(int n,int r)
{
    int remainder;
    while(n)
    {
        remainder=n%10;
        if(remainder==r)
        {
            return 1;
            break;
        }
        n=n/10;
    }
    return 0;

}
int main()
{
   int a=1234,digit,s;
   printf("enter digit");
   scanf("%d",&digit);
   s=find(a,digit);
   if(s==1)
    printf("no is found");
   else printf("no is not found");
    return 0;
}
