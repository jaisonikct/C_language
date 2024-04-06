 #include<Stdio.h>
 int main()
{
    int a[100],dim,i;
    printf("\n Enter any dimention: 5");
    scanf("%d",&dim);
    for(i=0; i<=dim-1;i++)
    {
        printf("\n Enter any element for A [%d]: ", i);
        scanf("%d", &a[i]);

    }
    for(i=0; i<=dim-1;i++)
    {
        printf("\n a[%d=%d adress=%d ", i,a[i],&a[i]);
        scanf("%d", &a[i]);
        
    }
}