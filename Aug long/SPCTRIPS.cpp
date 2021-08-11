#include <bits/stdc++.h>
using namespace std;

void pre() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


void spctrips(int n){
    int c,count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            c = j%i;
           if(c != 0 && i%c == 0){
                 count++;
            }

            c = i%j;

            if(c != 0 && j%c == 0){
                count++;
            }
            
        }
    }
    cout <<count<<endl;
}

int main() {
    // pre();
    
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
	int t;
    cin >> t;
	while(t>0){
        int n;
        cin >> n;
        cout << n <<endl;
        spctrips(n);
        cout<<endl;
		t--;
	}
	return 0;
}