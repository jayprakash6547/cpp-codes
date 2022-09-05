#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;cin>>n;
	string s="10";
	if(n==3)
	s="010";
	else{
		for(int i=0;i<n-3;i++){
			s.pb('0');
		}
		s.pb('1');
	}		
	cout<<s<<endl;	
	}
}