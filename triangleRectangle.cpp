#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
void solve(){
    ll w,h;
    cin>>w>>h;
    ll x = 2;
    ll y = 2;
    ll max_x = INT_MIN;
    ll max_y = INT_MIN;
    
    while(x--){
        ll k;// no. of points
        cin>>k;
        vector<ll>X(k);
        for(ll i=0; i<k; i++){
            cin>>X[i];
        }
        ll diff = X[k-1] - X[0];
        max_x = max(max_x,diff);
    }

    while(y--){
        ll k;// no. of points
        cin>>k;
        vector<ll>Y(k);
        for(ll i=0; i<k; i++){
            cin>>Y[i];
        }
        ll diff = Y[k-1] - Y[0];
        max_y = max(max_y,diff);
    }
    ll ans1 = w*max_y;
    ll ans2 = h*max_x;
    cout<<max(ans1,ans2)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}