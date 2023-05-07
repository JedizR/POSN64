#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,cnt=0,t,q,w;
    scanf("%lld",&q);
    while(q--)
    {
        n=0;
        cnt=0;
        t=0;
        w=0;
        scanf("%lld",&n);
        t=n;
        while((n%2)==0)
        {
            n/=2;
            cnt++;
        }
        n=t;
        w=cnt;
        while(cnt--)
        {
            n/=2;
            //printf("2 x ");
            if(cnt==w-1)
            {
                printf("2 ");
            }
            else
                printf("x 2 ");
        }
        for(long long i=3;i<=sqrt(t);i+=2)
        {
            cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            while(cnt--)
            {
                if(w==0)
                {
                    printf("%lld ",i);
                    w=1;
                }
                else
                    printf("x %lld ",i);
                //if(cnt>=1)
                //    printf("x ");
            }
        }
        if(n>2)
        {
            printf("%lld ",n);
        }
    }
    return 0;
}
