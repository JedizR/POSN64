#include <bits/stdc++.h>

using namespace std;
int a[2000010];
stack<int> st;
int main()
{
    int i,n,l,r,mid;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    l=0,r=INT_MAX;
    while(l<r)
    {
        mid=(l+r)/2;
        err=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>mid) st.push(a[i]);
        }
        if(st.size()%2==1) err=1;
        else
    }
    return 0;
}
