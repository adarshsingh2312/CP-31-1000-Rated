#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>

bool isPrime(int i){
    if(i<2) return false;
    if(i==2)    return true;
    for(int j=2; j*j<=i; j++){
        if(i%j==0)  return false;
    }
    return true;
}

void solve(){
    int d;
    cin>>d;
    int p1 = d+1;
    while(!isPrime(p1)) p1++;
    int p2 = p1+d;
    while(!isPrime(p2)) p2++;
    cout<<(p1*p2)<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}