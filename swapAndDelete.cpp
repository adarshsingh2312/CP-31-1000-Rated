#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int count_0 = count(s.begin(),s.end(),'0');
        int count_1 = count(s.begin(),s.end(),'1');
        if(count_0==count_1){
            cout<<"0"<<endl;
            continue;
        }
        int i = 0;
        for(i=0; i<n; i++){
            if(s[i]=='0'){
                if(count_1>0){
                    count_1--;
                }
                else    break;
            }
            if(s[i]=='1'){
                if(count_0>0){
                    count_0--;
                }
                else    break;
            }
        }
        cout<<(n-i)<<endl;
    }
    return 0;
}