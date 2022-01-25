
#include "bits/stdc++.h"
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int num=n;
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev){
        cout<<"the "<<num<<"is in palindrome";
    }
    else{
        cout<<"the "<<num<<"is not palindrome";
    }


    return 0;
}
