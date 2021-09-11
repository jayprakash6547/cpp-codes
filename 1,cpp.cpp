#include<bits/stdc++.h>
#define ll long long
//#define ff first
//#define ss second
using namespace std;
 
bool cmp(pair<ll,ll>a, pair<ll,ll>b){
    if(a.first > b.first){
        return true;
    }else if(a.first == b.first){
        if(a.second > b.second){
            return true;
        }
    }
    return false;
}
int main(){
    ll t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>j(n);
        vector<pair<ll,ll>jp(n);
        for(i=0; i<n; i++){
            cin>>j[i];
            if(i!=0){
            jp[i].first = j[i];
            jp[i].second = i;
            }
        }
        ll c=0;
        ll top = j[0];
        sort(jp.begin(), jp.end(), cmp);
        ll x = 0, q=0;
        for(i=0; i<n; i++){
            if(jp[i].first <= top && x<jp[i].second){
                top = jp[i].first;
                x = jp[i].second;
                c++;
            }else if(jp[i].first > top && x<jp[i].second){
                q=1;
                break;
            }
        }
        if(q==1){
            c=-1;
        }
        cout<<c<<"\n";
    }
}
