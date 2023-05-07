#include <bits/stdc++.h>
using namespace std;
int par[100010];
char t;
int fr(int i)
{
    if(par[i]==i) return i;
    else return par[i]=fr(par[i]);
}
int main()
{
    int i,n,q,x,y,frx,fry;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
    while(q--)
    {
        scanf(" %c %d %d",&t,&x,&y);
        frx=fr(x);
        fry=fr(y);
        if(t=='c')
        {
            par[frx]=fry;
        }
        if(t=='q')
        {
            if(frx==fry) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
