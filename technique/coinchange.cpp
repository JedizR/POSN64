#include <bits/stdc++.h>

using namespace std;
int c[15],dp[1000010];

int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c[i]);
    }
    memset(dp,127,sizeof dp);
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=c[i];j<=k;j++)
        {
            dp[j]=min(dp[j],dp[j-c[i]]+1);
        }
    }
    if(dp[k]>k) printf("0");
    else printf("%d",dp[k]);
    return 0;
}
