#include <stdio.h>
#include <math.h>

int a[10][10];
int b[10][10];
int s[10][10];
int main()
{
    int n1,m1,n2,m2,i,j,k,sum;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(m1>=m2)
    {
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(k=0;k<n1;k++)
        {

            for(i=0;i<n1;i++)
            {

                for(j=0;j<m1;j++)
                {

                    sum+=a[k][j]*b[j][i];
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Can't Multiply.");
    }


}
