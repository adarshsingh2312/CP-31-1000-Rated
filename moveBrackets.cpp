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
        string s;
        cin>>s;
        unordered_map<char,int>m = {{'(',1},{')',-1}};
        int disc = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            disc+=m[s[i]];
            if(disc<0 && s[i]==')'){
                count++;
                disc = 0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}