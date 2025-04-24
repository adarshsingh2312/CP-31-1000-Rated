#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vii visits(n+1);
        for(int i=1; i<=n; i++){
            cin>>visits[i].first;
            visits[i].second = i;
        }
        sort(visits.begin()+1, visits.end(), greater<pii>());
        ll timeTotal = 0;
        ll current = 1;
        vll config(n+1);
        for(int i=1; i<=n; i++){
            timeTotal += 2*current*visits[i].first;
            if(i%2!=0){
                config[visits[i].second] = current;
            }
            else{
                config[visits[i].second] = -current;
                current++;
            }
        }
        cout<<timeTotal<<endl;
        for(auto pos : config){
            cout<<pos<<" ";
        }
        cout<<"\n";
    }
    return 0;
}