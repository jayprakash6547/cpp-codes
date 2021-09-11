#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
     cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=0; i<n; i++){
        maxx=max(maxx,array[i]);
        minn=min(minn,array[i]);
    }
 
    
    return 0;
}

