#include <bits/stdc++.h>
using namespace std;

int fairElements(int A[], int B[], int N, int M, int sumA, int sumB){
    int count = 0, i=0;
    while(sumA <= sumB && N>0){
    sumA = sumA + B[i] - A[i];
    sumB = sumB + A[i] - B[i]; 
    count++;
    i++;
    N--;
    }

    if (N == 0 && sumA <= sumB){
        count = -1;
    }
    
    cout << count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,M,N,sumA = 0,sumB = 0;
    cin >> t;
    while(t>0){
        sumA = 0;
        sumB = 0;
        cin >> N >> M;
        int A[N], B[M];
        for(int i = 0; i < N; i++){
            cin >> A[i];
            sumA += A[i];
        }

        for(int i = 0; i < M; i++){
            cin >> B[i];
            sumB += B[i];

        }
        sort(A, A + N);
        sort(B, B + M, greater<int>());
        fairElements(A,B,N,M,sumA,sumB);
        t--;
        if(t!=0){
            cout <<endl;
        }
    }
    return 0;
}