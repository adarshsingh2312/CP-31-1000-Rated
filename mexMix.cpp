#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
int N = 3e5+10;
vi xors(N);
int main(){
    xors[0]= 0;
    for(int i=1; i<N; i++){
        xors[i] = xors[i-1]^i;
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x = xors[a-1];
        if(x==b){
            cout<<a<<endl;
        }
        else if((x^b)==a){
            cout<<a+2<<endl;
        }
        else{
            cout<<a+1<<endl;
        }
    }
    return 0;
}