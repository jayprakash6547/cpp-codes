#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}			
	int mx=0;
	for(int i=0;i<n-k+1;i++){
		int sum=0;
		for(int j=i;j<(k+i);j++){
			sum+=a[j];
		}
		mx=max(mx,sum);
	}
	cout<<mx<<"\n";
	}
}