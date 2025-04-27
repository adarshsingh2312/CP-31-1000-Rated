#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>

int solve(){
    ll a,b;
    cin>>a>>b;
    if(a<b){
        return 1;
    }
    else if(a==b)   return 2;
    int ops = 0;
    while(a>b){
        a/=b;
        b++;
        ops+=2;
    }
    return ops;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}