#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <string>
#include <bitset>
using namespace std;

unordered_map<string,char> prepareMap(){
    unordered_map<string,char> decodeMap ;
    string str = "abcdefghijklmnop";
    string encode;

    for (int i = 0; i <str.size();i++){
        encode = bitset<4>(i).to_string();
        decodeMap[encode] = str[i];
    }

    return decodeMap;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string,char> decodeMap ;
    decodeMap = prepareMap();

    int t, size;
    string encode, code, decodeString;
    decodeString = "";
    cin >> t;
    while (t>0)
    {
        cin >>  size; 
        encode = "";
        decodeString = "";
        cin >> code;
        encode = encode + code[0];
        for (int i=1; i<=size; i++){
            if(i%4 == 0){
                decodeString = decodeString + decodeMap[encode];
                encode = "";
            }
            encode = encode + code[i];
        }
        cout << decodeString << endl;
        t--;
    }
    

    return 0;
}