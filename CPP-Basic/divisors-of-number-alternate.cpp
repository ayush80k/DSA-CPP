#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> 
using namespace std;
vector<int> get_divisors(int num){
    vector<int> divisors;
    //instead of square root sqrt(num) we check if i*i <=num , it will be same as checking for squqare root but take less time. O(sqrt num)
    for(int i=1;i*i<=num;i++){
        if(num%i == 0){
            divisors.push_back(i);
            if(num/i != i){
                divisors.push_back(num/i);
            }
        }
    }
    return divisors;
}
int main() {
    vector<int> divisors = get_divisors(36);
    sort(divisors.begin(),divisors.end());
    cout<<"Divisor pairs: ";
    for(int i : divisors){
        cout<<i<<" ";
    }
    return 0;
}
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
