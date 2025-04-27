#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
void solve(){
    string a,b;
    cin>>a>>b;  
    int m = a.size();
    int n = b.size();
    int i=0;
    int j = 0;
    int ans = m+n;
    for(i=0; i<m; i++){
        for(j=1; j<=m-i; j++){
            string a_sub = a.substr(i,j);
            if(b.find(a_sub)!=string::npos){
                int ops = m-j + n-j;
                ans = min(ans,ops);
            }
        }
    }
    cout<<ans<<endl;
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