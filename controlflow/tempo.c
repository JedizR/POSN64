#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=(2*n+1);i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0||j==1)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        for(int j=i;j<(2*n+1);j++)
        {
            if(j%2==0||j==(2*n+1)||i==1)
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
    return 0;
}
