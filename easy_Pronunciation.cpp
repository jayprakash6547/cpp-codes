#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int c=0;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c=0;
            else
               c=c+1;
            if(c>=4)
            break;
        }
        if(c>=4)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
       
    }
}