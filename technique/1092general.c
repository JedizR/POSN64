#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,q;
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
        if(a[x]==a[y])
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
        else if(a[x]<a[y])
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
                printf("%d\n",frx)
            }
        }
    }
    return 0;
}
