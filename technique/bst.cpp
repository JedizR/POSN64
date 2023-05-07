#include <bits/stdc++.h>

using namespace std;
int val[305],l[305],r[305];
void preorder(int i)
{
    cout << val[i];
    if(l[i]!=-1) preorder(l[i]);
    if(r[i]!=-1) preorder(r[i]);
}
void inorder(int i)
{
    if(l[i]!=-1) inorder(l[i]);
    cout << val[i];
    if(r[i]!=-1) inorder(r[i]);
}
void postorder(int i)
{
    if(l[i]!=-1) postorder(l[i]);
    if(r[i]!=-1) postorder(r[i]);
    cout << val[i];
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int i,n,x,now;
    cin >> n;
    cin >> val[1];
    for(i=1;i<=n;i++)
    {
        l[i]=-1;
        r[i]=-1;
    }
    for(i=2;i<=n;i++)
    {
        cin >> val[i];
        now=1;
        while(1)
        {
            if(val[i]<val[now]&&l[now]==-1)
            {
                l[now]=i;
                break;
            }
            else if(val[i]>val[now]&&r[now]==-1)
            {
                r[now]=i;
                break;
            }
            if(val[i]<val[now])
            {
                now=l[now];
            }
            else
            {
                now=r[now];
            }
        }
    }
    preorder(1);
    cout << "\n";
    inorder(1);
    cout << "\n";
    postorder(1);
    return 0;
}
