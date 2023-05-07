#include <bits/stdc++.h>

using namespace std;
char a[100010];
stack<char> st;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int q,n,i,err=0;
    cin >> q;
    while(q--)
    {
        cin >>a;
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(err==1) break;
            if(a[i]=='{'||a[i]=='('||a[i]=='[') st.push(a[i]);
            else
            {
                if(a[i]==']')
                {
                    if(st.empty()||st.top()!='[') err=1;
                    else st.pop();
                }
                else if(a[i]=='}')
                {
                    if(st.empty()||st.top()!='{') err=1;
                    else st.pop();
                }
                else if(a[i]==')')
                {
                    if(st.empty()||st.top()!='(') err=1;
                    else st.pop();
                }
            }
        }
        while(!st.empty()) err=1,st.pop();
        if(err==1) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
