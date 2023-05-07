#include <bits/stdc++.h>

using namespace std;
struct A{
    long long v,w,x,m,a,s;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
vector<pair<int,int>> g[50010];
priority_queue<A> h;
long long dis[50010][2][2][2][2];
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long u,v,w,n,m,sx=1,sm=1,sa=1,ss=1;
    scanf("%lld %lld",&n,&m);
    scanf(" %s",c);
    scanf(" %s",card+2);
    for(i=1;i<=m;i++)
    {
        scanf()
    }
    if(c[0]=='_') sx=0;
    if(c[1]=='_') sm=0;
    if(c[2]=='_') sa=0;
    if(c[3]=='_') ss=0;
    if(card[n]=='X') sx=1
    h.push({n,0,sx,sm,sa,ss});
    dp[n][sx][sm][sa][ss]=0;
    while(!h.empty())
    {
        v=h.top().v;
        w=h.top().w;
        x=h.top().x;
        m=h.top().m;
        a=h.top().a;
        s=h.top().s;
        h.pop();
        for(auto x : g[v])
        {
            if(card[n]=='X')
            {
                if(dis[x.v][1][m][a][s]<=w+x.w) continue;
                dis[x.v][1][m][a][s]=w+x.w;
            }
            if(card[n]=='M') m=1;
            if(card[n]=='A') a=1;
            if(card[n]=='S') s=1;

        }
    }
    printf("%d",)
    return 0;
}
