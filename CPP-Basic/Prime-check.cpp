#include <iostream>
#include <vector>
using namespace std;

bool isPrime1(int num){
    //Checking each divisor individually
    for(int i=2;i<=num/2;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

bool isPrime2(int num){
    //Checking the number of divisors (Prime number has only two divisor, 1 and itself)
    vector<int> divisors;
    for(int i=1;i*i <= num;i++){
        if(num%i == 0){
            divisors.push_back(i);
            if(num/i != i){
                divisors.push_back(num/i);
            }
        }
    }
    if(divisors.size() == 2){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int num=15;
    cout<<num<<" is "<<(isPrime1(num)?"Prime":"Not Prime")<<endl;
    cout<<num<<" is "<<(isPrime2(num)?"Prime":"Not Prime")<<endl;
    return 0;
}
