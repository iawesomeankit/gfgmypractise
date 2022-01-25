#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+(n/i);
    }
    cout<<res;


    return 0;
}
