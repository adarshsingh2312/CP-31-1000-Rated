#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count = 0;
        for(int i=0; i<k; i++){
            if(s[i]=='W')   count++;
        }
        int mini = count;
        for(int i=1; i<=n-k; i++){
            if(s[i-1]=='W') count--;
            if(s[i+k-1]=='W')    count++;
            if(mini>count) mini = count;
        }
        cout<<mini<<endl;
    }
    return 0;
}