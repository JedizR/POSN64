#include <bits/stdc++.h>

using namespace std;

main()
{
    double a1,a2,b1,b2,c1,c2,d1,d2,d3,h,s;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    d1=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
    d2=sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2));
    d3=sqrt((c1-a1)*(c1-a1)+(c2-a2)*(c2-a2));
    s=(d1+d2+d3)/2;
    h=sqrt(s*(s-d1)*(s-d2)*(s-d3));
    cout << h;

}
