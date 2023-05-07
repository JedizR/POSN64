#include <stdio.h>
#include <math.h>

int a[1000];
int main()
{
    int n,i,k,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        if(a[i]==k) cnt+=1;
    }
    printf("%d\n",cnt);
    return 0;
}
