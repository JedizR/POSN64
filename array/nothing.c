#include <stdio.h>
#include <math.h>

char a[20][20];
int c[25];
int main()
{
    int n,m,i,j,k,l,max;
    max=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    //for(i=0;i<m;i++)
    //{
    //    scanf("%d",&c[i]);
    //}

}

