#include <bits/stdc++.h>

using namespace std;
char a[1010];
int dp[1010][1010];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %c",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        dp[i][i]=0;
    }
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i+1]) dp[i][i+1]=1;
        else dp[i][i+1]=0;
    }
    for(k=3;k<=n;k++)
    {
        for(i=1;i+k-1<=n;i++)
        {
            int mx=-1;
            if(a[i]==a[i+k-1])
        }
    }
    return 0;
}
