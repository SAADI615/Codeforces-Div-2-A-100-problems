#include<bits/stdc++.h>
using namespace std;
int main(){
    int s_n,m_m;
    cin>>s_n>>m_m;
    string s;
    cin>>s;
    for(int i=0; i<m_m; i++){
        int l,r;
        cin>>l>>r;
        char c1, c2;
        cin>>c1 >> c2;
        for(l; l<=r; l++){
            if(s[l-1]==c1) s[l-1]=c2;
        }
    }
    cout<<s<<endl;
    return 0;
}