#include <bits/stdc++.h>

using namespace std;
int a[505][505],u[505][505],l[505][505];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int i,j,m,n,q=2,k;
    cin >> n >> m;
    while(q--)
    {
        memset(a,0,sizeof a);
        memset(u,0,sizeof u);
        memset(l,0,sizeof l);
        cin >> k;
        while(k--)
        {
            cin >> i >> j;
            a[i+1][j+1]=1;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]==0)
                {
                    u[i][j]=0;
                    l[i][j]=0;
                    continue;
                }
                l[i][j]=l[i][j-1]+1;
                u[i][j]=u[i][j-1]+1;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                for(k=1;;k++)
                {
                    if(i-k<0||j-k<0) break;
                    if(a[i-k+1][j]==1||a[i][j-k+1]==1)break;
                    if(u[i][j-k+1]>=k&&)
                }

            }
        }
        cout
    }
    return 0;
}
