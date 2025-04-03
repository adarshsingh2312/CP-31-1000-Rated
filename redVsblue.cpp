#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>
#include <vector>
#include <string>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r, b;
        cin>>n>>r>>b;
        string s;
        int nreds = r/(1+b);
        int left = r%(1+b);
        for(int i=0; i<b; i++){
            for(int j=0; j<nreds; j++){
                s.push_back('R');
            }
            if(left>=1){
                s.push_back('R');
                left--;
            }
            s.push_back('B');
        }
        for(int i=0; i<nreds; i++){
            s.push_back('R');
        }
        cout<<s<<endl;
    }

    return 0;
}