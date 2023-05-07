#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
char a[2000][2000],b[100];
int di[10]={0,0,1,-1,1,1,-1,-1},dj[10]={1,-1,0,0,1,-1,1,-1};
int main()
{
    int i,j,r,c,q,len,k,ii,jj,l,ch;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf(" %c",&a[i][j]),a[i][j]=toupper(a[i][j]);
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++)
            b[i]=toupper(b[i]);
        for(i=0,ch=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                for(k=0;k<8;k++)
                {
                    ii=i,jj=j;
                    for(l=0;l<len&&a[ii][jj]==b[l];l++)
                        ii=ii+di[k],jj=jj+dj[k];
                    if(l==len)
                    {
                        printf("%d %d\n",i,j);
                        ch=1;
                        break;
                    }
                }
                if(ch)
                    break;
            }
            if(ch)
                break;
        }
    }
    return 0;
}
