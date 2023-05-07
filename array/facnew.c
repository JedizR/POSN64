#include <stdio.h>
int fac(int m,int n);
int main()
{

    int m,n;
    printf("Input n : ");
    scanf("%d %d" , &m,&n);
    printf(" %d factorial is : %d", n, fac(m,n));
    return 0;
}

int fac (int m,int n)
{
    if(m==0)
        return n+1;
    else if(n==0)
        return fac(m-1,1);
    else
        return fac(m-1,fac(m,n-1) );
}
