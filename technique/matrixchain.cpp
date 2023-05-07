#include <bits/stdc++.h>

using namespace std;
int dp[15][15],a[15],b[15];
int finddp(int l,int r)
{
    if(dp[l][r]!=-1) return dp[l][r];
    if(l==r) return dp[l][r]=0;
    int k,mi=1e9;
    for(k=1;k<r;k++)
    {
        if(mi<(finddp(l,k)+finddp(k+1,r)+a[l]*a[k+1]*b[r]))
        {
            mi=finddp(l,k)+finddp(k+1,r)+a[l]*a[k+1]*b[r];
            pos[l][r]=k;
        }
    }
    return dp[l][r]=mi;
}
void printmatrix(int l,int r)//
{
    if(l==r)
    {
        printf()
    }
    printf("(");
    printmatrix(l,pos())
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    memset(dp,-1,sizeof dp);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    printf("%d\n",finddp(1,n));
    printmatrix(1,n);
    return 0;
}
