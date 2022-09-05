#include<bits/stdc++.h>
using namespace std;
char arr[501][501];
void jay() {
  int n,k,m,y;
  cin >> n >> k >> m >> y;
  for(int i=1;i<=n;++i)
    for(int j=1;j<=n;++j)
      arr[i][j]='.';
  for(int l=2;l<=n*2;++l)
    if(abs(m+y-l)%k==0)
      for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
          if(i+j==l)
            arr[i][j]='X';
  for(int i=1;i<=n;++i) {
    for(int j=1;j<=n;++j)
      cout << arr[i][j];
    cout << "\n";
  }
}
signed main() {
  int t;
  cin >> t;
  while(t--)
   jay();
}