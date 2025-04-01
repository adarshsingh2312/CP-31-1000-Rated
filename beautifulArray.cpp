#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s<(b*k) || s>((b*k)+n*(k-1))){
            cout<<-1<<endl;
            continue;
        }
        ll a1 = k*b;
        s-=(k*b);
        if(s>=k-1){
            a1+=(k-1);
            s-=(k-1);
        }
        else{
            a1+=s;
            s = 0;
        }
        cout<<a1<<" ";
         for(int i=2; i<=n; i++){
            ll ai = 0;
            if(s>=(k-1)){
                ai = k-1;
                s-=(k-1);
            }
            else{
                ai = s;
                s -= ai;
            }
            cout<<ai<<" ";
         }
         cout<<endl;
    }

    return 0;
}