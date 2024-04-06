#include<stdio.h>
int main ()
{
    int a[100],dim,i,sum=0;
    printf ("\n enter any dimention:");
    scanf ("%d",&dim);
    for (i=0;i<=dim-1;i++)
    {
        printf ("\n enter any element for a[%d]",i);
        scanf ("%d",&a[i]);
        sum=sum+a[i];

    }
    printf ("\n sum of of all numbers =%d",sum);
}