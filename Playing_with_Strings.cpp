#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,i,c=0,d=0;cin>>n;
	string s,r;
	cin>>s>>r;
	for(i=0;i<n;i++){
		if(s[i]=='1')
			c++;
		else
			c--;
		if(r[i]=='1')
			d++;
		else
			d--;
	}
	if(c==d)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	}
}