#include <bits/stdc++.h>
int a[1010],b[1010];
using namespace std;
void mergesort (int l,int r)
{
    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    int i=l,j=mid+1,k=1;
    while(i<=mid&&j<=r)
    {
        if(a[i]<a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=r) b[k++]=a[j++];
    for(i=l;i<=r;i++) a[i]=b[i];
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    mergesort(1,n);
    for(i=1;i<=n;i++) printf("%d ",a[i]);
    return 0;
}
