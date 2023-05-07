#include <bits/stdc++.h>

using namespace std;
int par[100010],a[100010];
char t;

int fr(int i)
{
    if(par[i]==i) return i;
    return par[i]=fr(par[i]);
}

int main()
{
    int i,n,q,x,y,frx,fry;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
        par[i]=i;
    }
    while(q--)
    {
        scanf("%d %d",&x,&y);
        frx=fr(x);
        fry=fr(y);
        if(frx==fry)
        {
            printf("-1\n");
            continue;
        }
        if(a[frx]>a[fry])
        {
            par[fry]=frx;
            a[frx]+=a[fry]/2;
            printf("%d\n",frx);
        }
        else if(a[frx]<a[fry])
        {
            par[frx]=fry;
            a[fry]+=a[frx]/2;
            printf("%d\n",fry);
        }
        else
        {
            if(frx>fry)
            {
                par[frx]=fry;
                a[fry]+=a[frx]/2;
                printf("%d\n",fry);
            }
            else
            {
                par[fry]=frx;
                a[frx]+=a[fry]/2;
                printf("%d\n",frx);
            }
        }
    }
    return 0;
}
