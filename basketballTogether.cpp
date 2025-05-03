#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>


int main(){
    int N,D;
    cin>>N>>D;
    vector<int>p(N);
    for(int i=0; i<N; i++){
        cin>>p[i];
    }
    sort(p.rbegin(),p.rend());
    vector<int>teams;
    for(int i=0; i<N; i++){
        int x = (D/p[i]);
        teams.push_back(x+1);
    }
    int count = 0;
    for(int i=0; i<teams.size(); i++){
        if(teams[i]<=N){
            count++;
            N-=teams[i];
        }
    }
    cout<<count<<endl; 
    return 0;
}