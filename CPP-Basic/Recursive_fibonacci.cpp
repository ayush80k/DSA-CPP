#include <iostream>
using namespace std;
//fibonacci Series
void fibonacci(int len,int n1=0,int n2=1){
    if(len>0){
        cout<<n1<<" ";
        fibonacci(len-1,n2,n1+n2);
    }
}

int main() {
    int length;
    cin>>length;
    fibonacci(length);
    return 0;
}