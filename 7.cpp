#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef long long int ll;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int lcm = (a*b)/gcd(a,b);
    cout<<lcm;

    return 0;
}
