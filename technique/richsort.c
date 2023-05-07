#include<bits/stdc++.h>

using namespace std;
struct A{
    int x,y;
    bool operator<(const A&o) const{
        if(x!=o.x)
            return x<o.x;
        return y>o.y;
    }
}
A a[100100];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i].x,&a[i]);
}
