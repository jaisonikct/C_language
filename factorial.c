#include<stdio.h>
int fact(int);

int main()
{
    int n,f;
    printf("Enter the number: \n");
    scanf("%d",&n);
    f=fact(n);
    printf("\n factorial = %d",f);
}

int fact(int i)
{
    int factorial=1;
    while (i!=0)
    {
        factorial=factorial*i;
        i--; 
    }
    return factorial;
}
