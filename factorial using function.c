#include <stdio.h>

int fact(void);
int main()
{
    int n;
    n=fact();
    printf("\n the factorial of %d is ", n);

}
int fact()

{
    int n,f = 1;
    printf("\n enter any number");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        f = f * j;
    }
    return f;
}