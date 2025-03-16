#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<pair<int,int>>hp;
        for(int i=0; i<n; i++){
            if(a[i]%k==0)   a[i] = k;
            else    a[i] = a[i]%k;
            hp.push_back({a[i],-i});
        }
        sort(hp.begin(),hp.end());
        for(int i=n-1; i>=0; i--){
            cout<<abs(hp[i].second)+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}