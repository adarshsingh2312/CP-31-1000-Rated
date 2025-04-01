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
        vector<int>s(n+1);
        map<int,int>m;
        for(int i=1; i<=n; i++){
            cin>>s[i];
            m[s[i]]++;
        }
        bool possible = true;
        for(int i=1; i<=n; i++){
            if(m[s[i]]==1)  {
                possible = false;
                break;
            }
        }
        if(!possible){
            cout<<-1<<endl;
            continue;
        }
        vector<int>p(n+1);
        for(int i=1; i<=n; i++){
            p[i] = i;
        }
        int i = 1;
        while(i<=n){
            int current = s[i];
            int start = i;//range of duplicates ke liye
            int end = i;
            while(end<=n && s[end]==current){
                end++;
            }
            rotate(p.begin()+start,p.begin()+start+1,p.begin()+end);
            i = end;
        }
        for(int i=1; i<=n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}