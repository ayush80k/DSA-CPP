#include <iostream>
using namespace std;
//fibonacci Series
void fibonacci(int n1,int n2,int len){
    if(len>0){
        cout<<n1<<" ";
        fibonacci(n2,n1+n2,len-1);
    }
}
void print_fibonacci(int num){
    fibonacci(0,1,num);
}
int main() {
    print_fibonacci(8);
    return 0;
}