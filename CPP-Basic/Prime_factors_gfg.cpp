#include <iostream>
#include <vector>
using namespace std;

void printPrimeFactorization(int n) {
    // code here
    int pf=2,nm=n;
    vector<int> factors;
    while(nm>0){
        int flag = 0;
        if(nm%pf==0){
            for(int i=2;i<=pf/2;i++){
                if(pf%i==0){
                    flag++;
                    pf++;
                    break;
                }
                else{
                    continue;
                }
            }
            if(flag==0){
                nm=nm/pf;
                factors.push_back(pf);
            }
        }
        else{
            if(nm!=1) pf++;
            else break;
        }
    }
    for(int i : factors){
        cout<<i<<" ";
    }
}

int main() {
    int num;
    cin >> num;
    cout<<"Prime Factorization of "<<num<<" = ";
    printPrimeFactorization(num);
    return 0;
}