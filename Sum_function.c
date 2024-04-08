#include<stdio.h>
int add(int, int);

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Addition of two numbers = %d", add(x, y));
    return 0;
}

int add(int x, int y)

{
    return x + y;
}
