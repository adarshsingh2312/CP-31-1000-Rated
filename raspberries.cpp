#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){                                     
    int t;                                      
    cin>>t;                                     
    while(t--){                                     
        int n,k;                                        
        cin>>n>>k;                                      
        vector<int>a(n);
        int mini = INT_MAX;
        bool already = false;
        int evens = 0;
        for(int i=0; i<n; i++){                                     
            cin>>a[i];             
        }
        for(int i=0; i<n; i++){
            if(a[i]%k==0){
                already = true;
                break;
            }
            if(a[i]%2==0){
                evens++;
            }
            mini = min(mini,k-(a[i]%k));
        }            
        if(already){
            cout<<0<<endl;
            continue;
        }
        else if(k==4){
            if(evens>=2){
                cout<<0<<endl;
                continue;
            }
            else if(evens==1){
                cout<<1<<endl;
                continue;
            }
            else{
                cout<<min(2,mini)<<endl;
                continue;
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}