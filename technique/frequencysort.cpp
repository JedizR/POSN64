#include<bits/stdc++.h>

using namespace std;
map<int,int> mp;
int a[100100];
int cnt[100100];

int main()
{
    int c,n,i,j,mark;
    mark=0;
    scanf("%d %d",&n,&c);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=c;j++){
            if(a[i]==j)
                cnt[j]++;
        }
    }
    if(cnt)

    for(i=0;i<=c;i++)
    {
        if(cnt[i]!=0)
        {
            while(cnt[i]--)
                printf("%d ",i);
        }
    }
}
