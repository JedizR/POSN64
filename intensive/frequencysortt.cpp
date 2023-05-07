#include <bits/stdc++.h>

using namespace std;
int a[1010];
map <int,int> mp;

int main()
{
    int n,c,i,j,mx=0,k,mk;
    cin >> n >> c;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(j=0;j<1000;j++)
        for(i=0;i<n;i++)
        {
            if(mp[i]>mp[i-1])
            {
                mx=mp[i];
                mk=i;
            }
        }
        for(i=0;i<mx;i++)
        {
            cout << mk << " ";
        }
}
