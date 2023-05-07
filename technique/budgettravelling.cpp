#include <bits/stdc++.h>

using namespace std;
struct A
{
    int v,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
vector<A> g[1000010];
priority_queue<A> h;
int dp[100010];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m,q,i,u,v,w;
    scanf("%d %d %d %d %d",&n,&m,&x,&y,&z);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dp,127,sizeof dp);
    h.push({x,0});
    dp[x]=0;
    while(!h.empty())
    {
        v=h.top().v;
        w=h.top().w;
        h.pop();
        for(auto x : g[v])
        {
            if(w+x.w<dp[x.v])
            {
                dp[x.v]=w+x.w;
                h.push({x.v,dp[x.v]});
            }
        }
    }
    int mi=1e9+1,pos;
    for(i=0;i<n;i++)
    {
        if(dp[i]>z) continue;
        if(dp2[i]<mi)
        {
            mi=dp2[i];
        }
    }
    return 0;
}
