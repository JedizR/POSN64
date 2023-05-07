#include <bits/stdc++.h>

using namespace std;
char a[2005][2005];
int dis[2005][2005],di[4]={-1,1,0,0},dj[4]={0,0,1,-1};
queue<pair<int,int>> bfs;
int main()
{
    int i,j,n,m,ii,jj,cnt=0,ans=0,k;
    scanf("%d %d\n",&n,&m);
    memset(dis,127,sizeof dis);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='X') bfs.push({i,j}),dis[i][j]=0;
        }
    }
    while(!bfs.empty())
    {
        i=bfs.front().first;
        j=bfs.front().second;
        bfs.pop();
        if(a[i][j]=='A')
        {
            cnt++;
            ans+=dis[i][j];
        }
        for(k=0;k<4;k++)
        {
            ii=i+di[k];
            jj=j+dj[k];
            if(ii<1||ii>n||jj<1||jj>m) continue;
            if(a[ii][jj]=='W') continue;
            if(dis[ii][jj]>dis[i][j]+2)
            {
                dis[ii][jj]=dis[i][j]+2;
                bfs.push({ii,jj});
            }
        }
    }
    printf("%d %d\n",cnt,ans);
    return 0;
}
