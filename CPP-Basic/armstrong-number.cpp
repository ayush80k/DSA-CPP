#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Armstrong Number : Sum of Digits of a number raised to power == number of digits is same as the number itself.
    int num,comp,dig,sum=0;
    cin >> num;
    comp=num;
    dig = (int)(log10(num)+1);
    while(num>0){
        sum += round(pow(num%10,dig));
        num /= 10;
    }
    cout<<(comp==sum?"Armstrong":"Not Armstrong");
    return 0;
}
