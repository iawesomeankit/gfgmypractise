#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef long long int ll;

int pow(int a,int n){
    int res=1;
    int x=a;
    while(n!=0){
        if(n%2==0){
            n=n/2;
        }
        else{
            res=res*x;
            n=n/2;
        }
        x=x*x;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans = pow(a,b);
    cout<<ans;


    return 0;
}
