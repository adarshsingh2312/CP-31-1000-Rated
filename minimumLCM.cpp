#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define pii pair<int,int>

int biggestFactor(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)  return n/i;
    }
    return 1;
}

bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)  return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        if(n%2==0){
            a = n/2;
            b = n/2;
        }
        else{
            if(isPrime(n)){
                a = 1;
                b = n-1;
            }
            else{
                b = biggestFactor(n);
                a = n-b;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}