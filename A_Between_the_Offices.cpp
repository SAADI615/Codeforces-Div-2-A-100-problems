#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_sf=0;
    int cnt_fs=0;
    for(int i=0; i<n; i++){
        s[i]=toupper(s[i]);
        if(s[i]=='S'&&s[i+1]=='F') cnt_sf++;
        if(s[i]=='F'&&s[i+1]=='S') cnt_fs++;
    }
    if(cnt_sf>cnt_fs) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}