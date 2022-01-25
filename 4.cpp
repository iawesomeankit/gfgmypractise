#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef long long int ll;

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int res = fact(n);
    cout<<res;


    return 0;
}
