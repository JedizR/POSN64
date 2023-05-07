#include <stdio.h>
#include <math.h>

int main()
{
    int n,q;
    scanf("%d",&q);
    for(int k=1;k<=q;k++)
    {
        int n;
        scanf("%d",&n);
        if(n>=1000)
        {
            for(int i=1;i<=floor(n/1000);i++)
            {
                printf("M");
            }
            n=n-(floor(n/1000)*1000);
        }
        if(n>=900)
        {
            for(int i=1;i<=floor(n/900);i++)
            {
                printf("CM");
            }
            n=n-(floor(n/900)*900);
        }
        if(n>=500)
        {
            for(int i=1;i<=floor(n/500);i++)
            {
                printf("D");
            }
            n=n-(floor(n/500)*500);
        }
        if(n>=400)
        {
            for(int i=1;i<=floor(n/400);i++)
            {
                printf("CD");
            }
            n=n-(floor(n/400)*400);
        }
        if(n>=100)
        {
            for(int i=1;i<=floor(n/100);i++)
            {
                printf("C");
            }
            n=n-(floor(n/100)*100);
        }
        if(n>=90)
        {
            for(int i=1;i<=floor(n/90);i++)
            {
                printf("XC");
            }
            n=n-(floor(n/90)*90);
        }
        if(n>=50)
        {
            for(int i=1;i<=floor(n/50);i++)
            {
                printf("L");
            }
            n=n-(floor(n/50)*50);
        }
        if(n>=40)
        {
            for(int i=1;i<=floor(n/40);i++)
            {
            printf("XL");
            }
            n=n-(floor(n/40)*40);
        }
        if(n>=10)
        {
            for(int i=1;i<=floor(n/10);i++)
            {
                printf("X");
            }
            n=n-(floor(n/10)*10);
        }
        if(n>=9)
        {
            for(int i=1;i<=floor(n/9);i++)
            {
                printf("IX");
            }
            n=n-(floor(n/9)*9);
        }
        if(n>=5)
        {
            for(int i=1;i<=floor(n/5);i++)
            {
                printf("V");
            }
            n=n-(floor(n/5)*5);
        }
        if(n>=4)
        {
            for(int i=1;i<=floor(n/4);i++)
            {
                printf("IV");
            }
            n=n-(floor(n/4)*4);
        }
        if(n>=1)
        {
            for(int i=1;i<=floor(n/1);i++)
            {
                printf("I");
            }
            n=n-(floor(n/1)*1);
        }
        printf("\n");
    }
    return 0;
}
