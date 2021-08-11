#include <bits/stdc++.h>
using namespace std;

void pre() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int CHFINVNT(long int n, long int p, long int k){
    if(k>n || k == 1) {
        return p+1;
    }
    long int a = n/k;
    long int y = a*k;
    long int b = n-y;
    long int x = p%k; 
    long int result = 0;

    if(x != 0) result = (x*a)+b; 
    long int i = x;
    while(i!=p){
        result++; 
        i+=k;
    }
    result++; 
    return result;
}

int main() {
   // pre();
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
	while(t>0){
        long int n,p,k,result;
        cin >> n >> p >> k;
        result=CHFINVNT(n,p,k);
        cout<<result<< endl;
		t--;
	}
	return 0;
}