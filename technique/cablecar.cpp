#include <bits/stdc++.h>

using namespace std;
int par[200010];
struct A{
    int x,y,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
A e[1000010];
char t;
int fr(int i)
{
    if(par[i]==i) return i;
    else return par[i]=fr(par[i]);
}

int main()
{
    int i,n,m;
    long long ans=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&e[i].x,&e[i].y,&e[i].w);
    }
    sort(e,e+m);
    for(i=0;i<m;i++)
    {
        if(fr(e[i].x)==fr(e[i].y)) continue;
        else
        {
            par[fr(e[i].x)]=fr(e[i].y);
            ans+=(e[i].w-1);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
