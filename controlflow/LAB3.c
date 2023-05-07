#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0) printf("N is zero\n");
    if(n%2==0) printf("N is Even\n");
    else printf("N is Odd\n");
    if(n>0) printf("N is Positive\n");
    else if(n<0) printf("N is Negative\n");
    else printf("N is Zero\n");
    return 0;
}
