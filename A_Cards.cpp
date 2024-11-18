#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_zero =0;
    int cnt_one =0;
    for(int i=0; i<n; i++){
        if(s[i]=='z') cnt_zero++;
        else if(s[i]=='n') cnt_one++;
    }
    while(cnt_one--) cout<<"1 ";
    while(cnt_zero--) cout<<"0 ";
    return 0;
}