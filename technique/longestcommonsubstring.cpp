#include <bits/stdc++.h>

using namespace std;
char a[10010],b[10010];
int dp[2][10010];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int i,j,n,m,mx=0,p;
    cin >> a+1;
    cin >> b+1;
    n=strlen(a+1);
    m=strlen(b+1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i]==b[j]) dp[i%2][j]=dp[(i+1)%2][j-1]+1;
            else dp[i%2][j]=0;
        }
    }
    for(j=1;j<=m;j++)
    {
        if(mx<dp[n%2][j])
        {
            mx=dp[n%2][j];
            p=j;
        }
    }
    for(i=p-mx+1;i<=p;i++)
    {
        cout << a[i];
    }
    return 0;
}
