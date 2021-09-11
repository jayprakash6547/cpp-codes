#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main(){
    ll t,n,k,l,i,j;
    cin>>t;
    while(t--){
       cin>>n>>k;
       vector< pair<ll,ll> >v(n);
       ll x = k/2;
       x++;
       for(i=0; i<n; i++){
            cin>>v[i].ff;
            v[i].ss = i;
       }
       sort(v.begin(), v.end(), greater<>());
       vector<ll>an(n);
       for(i=0;i<x-1;i++){
           ll p = v[i].ss;
           ll ele = v[i].ff;
           an[p] = ele;
       }
       ll p = v[x-1].ss;
       ll ele = v[x-1].ff;
       an[p] = ele;
       for(i=x; i<k; i++){
           ll p = v[i].ss;
           ll ele = v[i].ff;
           an[p] = ele;
       }
       cout<<v[x-1].ff<<"\n";
       for(i=0; i<n; i++){
           if(an[i]!=0)
           cout<<an[i]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
