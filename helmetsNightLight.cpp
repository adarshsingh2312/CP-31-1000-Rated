#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<ll>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<pair<ll,ll>>cost_share;
        cost_share.push_back({p,n+1});
        for(int i=0; i<n; i++){
            cost_share.push_back({b[i],a[i]});
        }
        sort(cost_share.begin(), cost_share.end());
        ll residents = 1;
        ll cost = p;
        int i = 0;
        while(residents<n){
            ll remaining = n-residents;
            if(cost_share[i].second<=remaining){
                residents+=cost_share[i].second;
                cost = cost + ((cost_share[i].first)*(cost_share[i].second));
            }
            else{
                residents = n;
                cost = cost + cost_share[i].first*remaining;
            }
            i++;
        }
        cout<<cost<<endl;
    }
    return 0;
}