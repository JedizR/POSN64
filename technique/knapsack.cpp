#include <bits/stdc++.h>

using namespace std;
int p[105],w[105],dp[10010];

int main()
{
    int i,n,k,j,ans=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&p[i],w[i]);
    }
    memset(dp,-1,sizeof dp);
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=k;j>=w[1];j--)
        {
            if(dp[j-w[i]]==-1) continue;
            dp[j]=max(dp[j],dp[j-w[i]]+p[i]);
        }
    }
    for(i=1;i<=k;i++) ans=max(ans,dp[i]);
    printf("%d\n",ans);
    return 0;
}
