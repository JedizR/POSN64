#include<bits/stdc++.h>

using namespace std;
int main()
{
    int q,len,i
    scanf("%d",&q)
    while(q--)
    {
        scanf(" %s",a);
        len=strlen(a)
        for(i=0;i<len;i++)
        {
            if(a[i]=='('||a[i]=='[')
                st.push(a[i]);
            else if(a[i]==')')
            {
                if(!st.empty()&&st.top=='(')
                    st.pop();
                else{
                    ch=1;
                    break ;
                }

            }
            else if(a[i]==']')
            {
                if(!st.empty()&&st.top()=='[')
                    st.pop;
                else{
                    ch=1;
                    break;
                }
            }
        }
        if(ch||!st.empty())
            printf("No\n");
        else
            printf("Yes\n");
        while(!st.empty())
            st.pop();
    }
    return 0;
}
