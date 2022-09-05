#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;cin >> n;
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++) 
    { cin >> v1[i]; }
	for(int i=0;i<n;i++)
    { cin >> v2[i]; }
    ll a = 0, b = 0, c = 0;
    for(int i=0;i<n;i++)
    {
        if (v1[i] != v2[i])
            a = 1;
        if (i > 0 and v1[i] < v1[i - 1])
            b = 1;
        if (i > 0 and v2[i] < v2[i - 1])
            c = 1;
    }
    if (b == 0 and c == 0 and a == 1)
       cout<<"NO";
    else if (a == 0 or b == 0)
        cout<<"YES";
    else
        cout<<"NO";
cout<<"\n";
    }
}