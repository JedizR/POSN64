#include <stdio.h>
#include <math.h>

char ans[100];
int main()
{
    int q,i,j,now=0,l,cnt,x,y,v1,v2;
    char a[3][3][4]=
    {
        { {},{'A','B','C'},{'D','E','F'}
        ,{'G','H','I'},{'J','K','L'},{'M','N','O'}
        ,{'P','Q','R','S'},{'T','U','V'},{'W','X','Y','Z'} }
    };
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        if(i==0)
        {
            scanf("%d %d",&j,&cnt);
            if(j%3==0)
            {
                x=2;
                y=j/3-1;
            }
            else if(j%3==1)
            {
                x=0;
                y=j/3;
            }
            else if(j%3==2)
            {
                x=1;
                y=j/3;
            }
        }
        else
        {
            scanf("%d %d %d",&v1,&v2,&cnt);
            x+=v1;
            y+=v2;
        }
        if(x==0&&y==0)
        {
            while(cnt--)
            {
                if(now==0) break;
                else now--;
            }
        }
        else if((x==2&&y==2)||(x==0&&y==2))
        {
            if(cnt%4==0) cnt=3;
            else cnt=(cnt%4)-1;
            ans[now]=a[y][x][cnt];
            now++;
        }
        else
        {
            if(cnt%3==0) cnt=2;
            else cnt=(cnt%3)-1;
            ans[now]=a[y][x][cnt];
            now++;
        }
    }
    if(now==0)
    {
        printf("null\n");
        return 0;
    }
    for(i=0;i<now;i++)
    {
        printf("%c",ans[i]);
    }
    printf("\n");
    return 0;
}
