#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        ll beauty = 0;
        vector<int>mi;
        int mini = INT_MAX;
        for(int j=1; j<=n; j++){
            int m;
            cin>>m;
            vector<int>a(m);
            for(int i=0; i<m; i++){
                cin>>a[i];
            }
            sort(a.begin(), a.end());
            if(n>=2){
                mini = min(mini,a[0]);
                mi.push_back(a[1]);
            }
            else{
                mini = min(mini,a[0]);
                mi.push_back(a[0]);
            }
        }
    sort(mi.begin(),mi.end());
    if(n==1)    beauty = 1ll * mini;
    else{
        for(int i=1; i<n; i++){
            beauty+=(1ll * mi[i]);
        }
        beauty+=(1ll*mini);
    }
        cout<<beauty<<endl;
    }
    return 0;
}// mini + sum(2nd min) - min(2nd min);