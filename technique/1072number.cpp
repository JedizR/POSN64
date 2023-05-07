#include <bits/stdc++.h>

using namespace std;
int l[500010],a[500010],r[500010];
char c;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int m,n,i,x,y,k,now,d;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(i!=0) l(i)=i-1;
        else l(i)=n-1;
        if(i!=n-1) r(i)=i+1;
        else r(i)=0;
    }
    now=0;
    d=1;
    while(m--)
    {
        cin >> c
        if(c=='a')
        {
            cin >> x >> y;
            x--;
            y--;
            swap(a[(now+x*d+n)%n],a[(now+y*d+n)%n]);

        }
        else if(c=='b')
        {
            cin >> x >> k;
            x--;
            a[(now+x*d+n)%n]=k;
        }
        else if(c=='c')
        {
            cin >> x;
            x--;
            now=(now+x*d+n)%n;
            d=d*(-1);
        }
        else
        {
            cin >> x;
            x--;
            cout << a[(now+x*d+n)%n] << "\n";
        }
    }

    return 0;
}
