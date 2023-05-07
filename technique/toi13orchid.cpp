#include <bits/stdc++.h>

using namespace std;
int lis[100010];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m,i,p,cnt=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> m;
        p=upper_bound(lis,lis+cnt,m)-lis;
        if(p==cnt) cnt++;
        lis[p]=m;
    }
    cout << n-cnt << "\n";
    return 0;
}
