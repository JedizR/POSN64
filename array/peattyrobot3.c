#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[1000];
int main()
{
    scanf(" %s", a);
    int sz=strlen(a);
    int n=0, s=0, w=0, e=0;
    for(int i=0;i<sz;i++)
    {
        if(a[i]=='N') n++;
        else if(a[i] == 'S') s++;
        else if(a[i] == 'E') e++;
        else if(a[i] == 'W') w++;
    }
    int k;
    scanf("%d",&k);
    int now = abs(n-s)+abs(e-w);
    if(n>=s)
    {
        if(s>=k) now += k,k=0;
        else now += s,k-=s;
    }
    else
    {
        if(n>=k) now += k,k=0;
        else now += n,k-=n;
    }
    if(e>=w)
    {
        if(w>=k) now += k,k=0;
        else now += w,k-=w;
    }
    else
    {
        if(e>=k) now += k,k=0;
        else now += e,k-=e;
    }
    int ans = now-k;
    printf("%d",ans*2);

    return 0;
}
