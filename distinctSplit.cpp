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
        string s;
        cin>>s;
        map<char,int>left;
        map<char,int>right;
        for(char ch : s){
            right[ch]++;
        }
        int score = 2;
        for(int i=0; i<n-1; i++){
            left[s[i]]++;
            if(right[s[i]]==1){
                right.erase(s[i]);
            }
            else{
                right[s[i]]--;
            }
            int candidate = left.size()+right.size();
            score = max(candidate,score);
        }
        cout<<score<<endl;
    }
    return 0;
}