#include <bits/stdc++.h>

using namespace std;
int a[1010][1010],b[1010][1010];
int vala(int i1,int j1,int i2, int j2)
{
    return a[i2][j2]-a[i1-1][j2]-a[i2][j1-1]+a[i1-1][j1-1];
}
int valb(int i1,int j1,int i2, int j2)
{
    return b[i2][j2]-b[i1-1][j2]-b[i2][j1-1]+b[i1-1][j1-1];
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m,i,j,mx=-1,cost;
    cin >> n >> m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin >> a[i][j];
            a[i][j]+=(a[i-1][j]+a[i][j-1]-a[i-1][j-1]);
        }
    }
}
