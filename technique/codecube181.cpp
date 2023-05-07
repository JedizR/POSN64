#include <bits/stdc++.h>

using namespace std;
struct A{
    int u,v,w;
};
A e[50010];
pair<int,int> cheat[50010];
int pa[40010];
int fr(int i)
{
    if(pa[i]==i) return i;
    return pa[i]=fr(pa[i]);
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m,p,i,j,u,v,w,ch=0,l=0,r=1000000000,mid;
    cin >> n >> m >> p;
    for(i=1;i<=m;i++)
    {
        cin >> e[i].u >> e[i].v >> e[i].w;
        pa[fr(e[i].u)]=fr(e[i].v);
    }
    for(i=0;i<p;i++)
    {
        cin >> cheat[i].first >> cheat[i].second;
        if(fr(cheat[i].first)==fr(cheat[i].second)) ch=1;
    }
    if(ch==0)
    {
        cout << "-1\n"
    }
    while(l<r)
    {
        mid=(l+r+1)/2;
        for(i=0;i<=n;i++) pa[i]=i;
        for(i=0;i<m;i++)
        {

        }
    }
    return 0;
}

