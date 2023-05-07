/*#include <bits/stdc++.h>

using namespace std;
int dp[10]={1};
char a[1000000];

int main()
{
    int len,i;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='p')
            dp[1]+=dp[0],dp[1]%=2555;
        if(a[i]=='e')
            dp[2]+=dp[1],dp[2]%=2555;
        if(a[i]=='a')
            dp[3]+=dp[2],dp[3]%=2555;
        if(a[i]=='t')
            dp[4]+=dp[3],dp[4]%=2555;
        if(a[i]=='r')
            dp[5]+=dp[4],dp[5]%=2555;
            dp[7]+=dp[6],dp[7]%=2555;
        if(a[i]=='o')
            dp[6]+=dp[5],dp[6]%=2555;
    }
    printf("%d\n",dp[7]%2555);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define all(x) x.begin(),x.end()

int dp[10] = {1};
int main(){
    string s;cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'p'){
            dp[1]+=dp[0],dp[1]%=2555;
        }
        if(s[i] == 'e'){
            dp[2]+=dp[1],dp[2]%=2555;
        }
        if(s[i] == 'a'){
            dp[3]+=dp[2],dp[3]%=2555;
        }
        if(s[i] == 't'){
            dp[4]+=dp[3],dp[4]%=2555;
        }
        if(s[i] == 'r'){
            dp[5]+=dp[4],dp[5]%=2555;
            dp[7]+=dp[6],dp[7]%=2555;
        }
        if(s[i] == 'o'){
            dp[6]+=dp[5],dp[6]%=2555;
        }
    }
    cout << dp[7]%2555;
    return 0;
}
