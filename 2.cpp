#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		ll a[26];
		ll i,sum=0;
		for(i=0;i<s.size();i++)
			a[s[i]-'a']=i;
			string st;
			cin>>st;
			for(i=1;i<st.size();i++)
				sum=sum+abs(a[st[i]-'a']-a[st[i-1]-'a']);
				cout<<sum<<endl;
	}
}