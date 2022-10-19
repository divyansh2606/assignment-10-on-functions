#include<stdio.h>
float area(int);
int main()
{
    int r;
    float s;
    printf("enter radius");
    scanf("%d",&r);
    s=area(r);
    printf("are of circle is %f",s);
    return 0;
}
float area(int x)
{
    float area;
    area=(2*3.14*(x*x));
    return area;
}
