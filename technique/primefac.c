#include<math.h>
#include<stdio.h>
long long a[8000000];
int main()
{
    long long n,i,sq,j,q,k;
    scanf("%lld",&q);
    for(k=0;k<q;k++)
    {
        scanf("%lld",&n);
        a[2]=1;
        for(i=3;i<10000001;i+=2)
            a[i]=1;
        //sq=sqrt(1000000001);
        for(i=3;i*i<=10000001;i+=2)
        {
            if(a[i])
            {
                for(j=i*i;j<10000001;j+=i) {
                    a[j]=0;
                }
            }
        }
        if(a[n]==1)
        {
            printf("%lld",n);
            continue ;
        }
        while(a[n]!=1)
        {
            for(i=2;i<=n;i++){
                if(a[i]==1){
                    if(n%i==0){
                        n=n/i;
                        printf("%lld ",i);
                        if(a[n]!=1) printf("x ");
                        break;
                    }
                }
            }
        }
        printf("x %lld",n);
    }
    return 0;
}

