#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    long n;
    while(t--){
        cin >> n;
        long vol = n*n*n;
        if(n==1 || n==2){
            cout << vol << "\n";
        }else{
            long ans = pow((n - 2), 3);
            cout << vol - ans << "\n";
        }

    }

}
