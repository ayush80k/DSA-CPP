#include <iostream>
using namespace std;

int main() {
    int n=4, size = 2*n-1, dist_top,dist_bot,dist_left,dist_rig,val;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            dist_top = i;
            dist_bot = size-i-1;
            dist_left = j;
            dist_rig = size-j-1;
            val = n - min(min(dist_top,dist_bot),min(dist_left,dist_rig));
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
