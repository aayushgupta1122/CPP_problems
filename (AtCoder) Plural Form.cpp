#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin >> S;
    int len = S.length();
    if(S[len-1] == 's'){
        S.append("es");
    }else{
        S.append("s");
    }
    cout << S << endl;
    return 0;
}
