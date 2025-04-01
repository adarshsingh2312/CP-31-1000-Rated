#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int changes = 0;
        vector<ll>prev = {a[0]-x,a[0]+x};
        for(int i=1; i<n; i++){
            vector<ll>current = {a[i]-x,a[i]+x};
            vector<ll>overlap = {max(prev[0],current[0]),min(prev[1],current[1])};
            if(overlap[0]>overlap[1]){
                changes++;
                prev = current;
            }
            else{
                prev = overlap;
            } 
        }
        cout<<changes<<endl;
    }
    return 0;
}