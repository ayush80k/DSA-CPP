#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Alternate way of counting digits in a number
    //Only works for Positive non-zero numbers
    int n;
    cin >> n;
    cout<<(int)(log10(n)+1);
    return 0;
}
