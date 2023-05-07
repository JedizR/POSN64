#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    int j=n;

    while(j>0)
    {
        printf("%d ",j);
        j--;
    }
    printf("\n");

    int k=1;
    do
    {
        if(k%2==0)
        {
            printf("%d ",k);
        }
        k++;
    }while(k<=n);
    printf("\n");

    int l;
    if(n%2==0)
    {
        l=n;
    }
    else
    {
        l=n-1;
    }
    for(int i=l;i>0;i-=2)
    {
        printf("%d ",i);
    }
    printf("\n");

    int m=1;
    while(m<=n)
    {
        printf("%d ",m);
        m+=2;
    }
    printf("\n");

    int o;
    if(n%2==0)
    {
        o=n-1;
    }
    else
    {
        o=n;
    }
    do
    {
        printf("%d ",o);
        o-=2;
    } while(o>0);
    return 0;
}
