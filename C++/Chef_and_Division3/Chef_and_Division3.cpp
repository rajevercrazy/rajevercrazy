#include <stdio.h>
#include<iostream>
using namespace std;

int calDay(int problemsInADay, int setter,int day, int totalProblemCreated){
    int result = 0;
    int prosibleContest = 0;
    if(totalProblemCreated >= problemsInADay){
        prosibleContest = totalProblemCreated/problemsInADay;
        if(prosibleContest - day >= 0){
            result = day;
        }
        else{
            result = prosibleContest;
        }
    }
    return result;
}

int main()
{
    int T,N,K,D,A, sum = 0;
    scanf("%d",&T);
    for (int i = 0 ;i<T;i++){
        sum = 0;
        scanf("%d   %d   %d",&N,&K,&D);
        for (int j=0;j<N;j++){
            scanf("%d",&A);
            sum += A;
        }

        printf("%d\n",calDay(K,N,D,sum));

    }
    return 0;
}