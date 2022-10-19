#include<stdio.h>
int factorial(int);
int main()
{   int s;
    s=factorial(5);
    printf("%d",s);
    return 0;
}
int factorial(int x)
    {

      int i,fact=1;
      for(i=1;x>=i;x--)
      {
        fact=fact*x;
       }
       return fact;
    }




