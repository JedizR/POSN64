#include <stdio.h>
#include <math.h>

int main()
{
    int n,q;
    scanf("%d",&q);
    for(int k=1;k<=q;k++)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==1||j==1||i==(n+1)/2)
                {
                    printf("*");
                }
                else if (i<(n+1)/2&&j==n)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
            printf("-");
            for(int j=1;j<=n;j++)
            {
                if(i==1||j==1||i==n||j==n)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
            printf("-");
            for(int j=1;j<=n;j++)
            {
                if(i==1||i==n||i==(n+1)/2)
                {
                    printf("*");
                }
                else if (i<(n+1)/2&&j==1)
                {
                    printf("*");
                }
                else if (i>(n+1)/2&&j==n)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
            printf("-");
            for(int j=1;j<=n;j++)
            {
                if(j==1||j==n||i==j)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
