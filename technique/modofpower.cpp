#include <bits/stdc++.h>

using namespace std;
int modofpower (int a,int b,int c)
{
    if(b==0) return (1%c);
    int t=modofpower(a,b/2,c);
    if(b%2==0) return (t*t)%c;
    else return (a*((t*t)%c))%c;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d",&a,&b,&c); //find a to the power of a mod c
        printf("%d\n",modofpower(a,b,c));
    }
    return 0;
}
