#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef long long int ll;
int pow(int a,int n){
    if(n==0){
        return 1;
    }
    int temp = pow(a,n/2);
    temp=temp*temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*a;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res = pow(a,b);
    cout<<res;


    return 0;
}
