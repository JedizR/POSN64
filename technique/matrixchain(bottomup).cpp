#include <bits/stdc++.h>

using namespace std;
int dp[15][15],a[15],b[15];

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    memset(dp,127,sizeof dp);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=1;i<=n;i++) dp[i][i]=0;
    for(k=2;k<=n;k++)
    {
        for(i=1;i<=n-k;i++)
        {
            for(j=i;j<i+k;j++)
            {
                dp[i][i+k-1]=min(dp[i][i+k-1],dp[i][j]+dp[j+1][i+k-1]+a[i]*a[j+1]*b[i+k-1]);
            }
        }
    }
    printf("%d",dp[1][n]);
    return 0;
}
