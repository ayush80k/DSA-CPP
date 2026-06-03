#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*All divisors of a number : numbers that completely divide a given value (includes itself)
    Alternate way: divisors are in pairs, after we reach the square root of a specific number, its divisor pairs repeat in reverse order
    Example:
    For 36 -> 
    1 x 36 = 36
    2 x 18 = 36
    3 x 12 = 36
    4 x  9 = 36
    6 x 6  = 36 
    sqrt(36)=6 
    up to down -> 1-6
    down to up -> 6 to 36
    */
    int num;
    cin >> num;
    cout<<"Divisors of "<<num<<" are:"<<endl;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i == 0){
            cout<<i<<" ";
            (num/i != i)?cout<<num/i<<" ":cout<<"";
        }
    }
    return 0;
}
