#include<bits/stdc++.h>

using namespace std;
int a[100100];

int main()
{
    int n,m,i,l,r,mid,sum;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=0,r=2000000000;
    while(l<r){
        mid=(l+r)/2;
        for(i=0,sum=0;i<n;i++)
            sum+=mid/a[i];
        if(sum>=m)
            r=mid;
        else
            l=mid+1;
    }
    printf("%d\n",l);
}
