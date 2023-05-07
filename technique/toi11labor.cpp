#include <bits/stdc++.h>

using namespace std;
int a[1000010];
int main()
{
    long long n,m,i;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    long long l,r,mid;
    l=0,r=1e18+1;
    while(l<r)
    {
        mid=(l+r)/2;
        long long num=0;
        for(i=0;i<n;i++)
        {
            num+=(mid/a[i]);
        }
        if(num>=m)
        {
            r=mid;
        }
        else l=mid+1;
    }
    printf("%lld\n",l);
    return 0;
}
