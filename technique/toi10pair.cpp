#include <bits/stdc++.h>

using namespace std;
char a[1010];
int dp[1010][1010];
int finddp(int l,int r)
{
    if(dp[l][r]!=-1) return dp[l][r];
    if(l==r) return dp[l][r]=0;
    if(r-l==1)
    {
        if(a[])
    }
    int mx=-1;
    if(a[l]==a[r]) mx=max(mx,finddp[l+1][r-1]+1);
    for(int k=1;k<r;k++)
    {
        mx=max(mx,finddp[l][k]+finddp[k+1][r]);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,i,j;
    scanf("%d",&n);
    for(i=1;)
    return 0;
}
