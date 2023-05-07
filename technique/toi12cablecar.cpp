#include <bits/stdc++.h>

using namespace std;
int par[2510];
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
    int i,n,m,s,d,num;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&e[i].x,e[i].y,&e[i].w);
    }
    sort(e+1,e+m+1);
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
    scanf("%d %d %d",&s,&d,&num);
    for(i=1;i<=m;i++)
    {
        if(fr(e[i].x)==fr(e[i].y)) continue;
        else
        {
            par[fr(e[i].x)]=fr(e[i].y);
        }
        if(fr(s)==fr(d))
        {
            printf("%d",(num+e[i].w-2)/(e[i].w-1));
            break;
        }
    }
    return 0;
}
