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
    scanf("%d %d %d",&n,&m,&q);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dp,127,sizeof dp);
    h.push({1,0});
    dp[1]=0;
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
    while(q--)
    {
        scanf("%d",&u);
        if(dp[u]>1e9) printf("-1\n");
        else printf("%d\n",dp[u]);
    }
    return 0;
}
