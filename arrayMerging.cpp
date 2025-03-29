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
        vi a(n),b(n);
        set<int>ele;
        for(int i=0; i<n; i++){
            cin>>a[i];
            ele.insert(a[i]);
        }
        for(int j=0; j<n; j++){
            cin>>b[j];
            ele.insert(b[j]);
        }
        map<int,int>m1,m2;
        int count = 1;
        m1[a[0]] = 1;
        for(int i=1; i<n; i++){
            if(a[i]==a[i-1]){
                count++;
            }
            else{
                count = 1;   
            }
            m1[a[i]] = max(count,m1[a[i]]);
        }
        count = 1;
        m2[b[0]] = 1;
        for(int i=1; i<n; i++){
            if(b[i]==b[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            m2[b[i]] = max(count,m2[b[i]]);
        }
        int maxi = 1;
        for(int val : ele){
            maxi = max(maxi,m1[val]+m2[val]); 
        }
        cout<<maxi<<endl;
    }
    return 0;
}