#include <iostream>
using namespace std;
int main() {
    //All divisors of a number : numbers that completely divide a given value (includes itself)
    int num;
    cin >> num;
    cout<<"Divisors of "<<num<<" are:"<<endl;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
