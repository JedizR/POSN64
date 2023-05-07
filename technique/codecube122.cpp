#include <bits/stdc++.h>

using namespace std;
int dis[2][2][2][505][505];
struct A{
    int i,j,sj,sb,sp;
};
queue<A> bfs;
char a[505][505];
int di[4]={-1,1,0,0},dj[4]={0,0,-1,1};

int main()
{
    int i,j,n,m,is,js,ie,je,sj,sb,sp,ii,jj,d,k,ssj,ssb,ssp;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;j++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S') is=i,js=j;
            if(a[i][j]=='E') ie=i,je=j;
        }
    }
    memseet(dis,127,sizeof dis);
    bfs.push({is,js,0,0,0});
    while(!bfs.empty())
    {
        i=bfs.front().i;
        i=bfs.front().i;
        i=bfs.front().i;
        i=bfs.front().i;
        i=bfs.front().i;
        bfs.pop();
        d=dis[sj][sb][sp][i][j];
        if
        for(k=0;k<4;k++)
        {
            ii=i+di[k];
            jj=j+dj[k];
            if(ii<0||jj<0||ii)
        }
    }
}
