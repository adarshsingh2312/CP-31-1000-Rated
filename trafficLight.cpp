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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s.append(s);
        int idx = 0;
        int time = INT_MIN;
        int pos = 0;
        int d = 0;
        for(int i=s.size(); i>=0; i--){
            if(s[i]=='g')   pos = i;
            if(s[i]==c) {
                idx = i;
                d = pos-idx;
                time = max(d,time);
            }
        }
        cout<<time<<endl;
    }
    return 0;
}