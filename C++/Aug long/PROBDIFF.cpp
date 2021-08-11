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
        int a[4];
        map<int,int> checkMap;
        for(int i=0;i<4;i++){
            cin >> a[i];
            if(checkMap.count(a[i]) == 1)checkMap[a[i]] ++; 
            else checkMap[a[i]] = 1;
        }
        int size = checkMap.size();
        if(size == 4) cout << 2;
        else if(size == 3) cout << 2;
        else if(size == 2){
            
            if(checkMap[a[0]] == 2) cout << 2;
            else cout << 1;
        } 
        else cout<< 0;
        cout << endl;
		
        t--;
	}
	return 0;
}