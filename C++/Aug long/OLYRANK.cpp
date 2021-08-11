#include <bits/stdc++.h>
using namespace std;

void pre() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    pre();
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
	while(t>0){
        int g1,s1,b1,g2,s2,b2;
        cin >> g1>>s1>>b1>>g2>>s2>>b2;
        if((g1+s1+b1) > (g2+s2+b2)){
            cout << 1;
        }
        else{
            cout << 2;
        }
        cout << endl;
		t--;
	}
	return 0;
}