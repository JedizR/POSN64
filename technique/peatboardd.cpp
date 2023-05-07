#include <bits/stdc++.h>

using namespace std;
int t[1010][1010];

int main()
{
    int w,h,n,i,j,x1,y1,x2,y2;
    cin >> w >> h >> n;
    while(n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for(i=1;i<=h;i++)
        {
            for(j=1;j<=w;j++)
            {
                if(j>=x1&&j<=x2&&i>=y1&&i<=y2)
                {
                    t[i][j]++;
                }
            }
        }
    }
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            cout << t[i][j]%2;
        }
        cout << "\n";
    }
    return 0;
}
