#include <iostream>
#include <vector>
using namespace std;

int find_gcd(int n1, int n2){
    //Forward loop
    int count = min(n1,n2),gcd=0;
    for(int i=1;i<=count;i++){
        if(n1%i == 0 && n2%i == 0){
            if(i>gcd){
                gcd = i;
            }
        }
    }
    return gcd;
}

int find_gcd_optimised(int n1, int n2){
    //Reverse loop
    //When going in reverse, the very first divisor we encounter will be the GCD/HCF
    int count = min(n1,n2);
    for(int i=count;i>=1;i--){
        if(n1%i == 0 && n2%i == 0){
            return i;
        }
    }
    return 1;
}

int find_gcd_euclidian(int n1, int n2){
    //gcd(a,b) = gcd(a-b , b) or gcd(a,b) = gcd(a%b,b) ----- O(log n)
    while(n1>0 && n2>0){
        if(n1>n2){
            n1= n1%n2;
        }
        else{
            n2= n2%n1;
        }
    }
    if(n1 == 0){
        return n2;
    }
    else{
        return n1;
    }
}

int main() {
    int num1,num2;
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" = "<<find_gcd_euclidian(num1,num2);
    return 0;
}
