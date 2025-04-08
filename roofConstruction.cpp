#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k = 0;
        while(1<<(k+1)<=n-1)    k++;
        for(int i=(1<<k)-1; i>=0; i--){
            cout<<i<<" ";
        }
        for(int i=(1<<k); i<=n-1; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}