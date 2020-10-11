#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <utility>

using namespace std;

int main(){
    long int n;
    scanf("%ld", &n);
    long int temp;
    vector < long int > ivec;
    for(int i=0;i<n;i++){
        scanf("%ld", &temp);
        ivec.push_back(temp);
    }
    long int ma=-1;
    long int mi=0;
    long int i = 0;
    long int pos_ma;
    while(ma!=mi){
        ma = *max_element(ivec.begin(), ivec.end());
        mi = *min_element(ivec.begin(), ivec.end());
        //ini_ma = ma;
        ma = ma - mi;
        do{
            int ini_ma = find(ivec.begin(), ivec.end(), ma);
            pos_ma = distance(ivec.begin(), ini_ma);
            ivec[*pos_ma] = ma;
            i++;
        }while(pos_ma!=-1);
    }
    cout << i;
    return 0;
}
//find(v[pos_ma], v.end(), ini_ma)
