#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void move0(vector<int>& arr){
    vector<int> temp(arr.size(),0);
    int nz_indx=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            temp[nz_indx++]=arr[i];
        }
    }
    for(int j=0;j<arr.size();j++){
        arr[j]=temp[j];
    }
}

void move0_opt(vector<int>& arr){
    int j = -1; //Location of first zero
    for(int x=0;x<arr.size();x++){
        if(arr[x]==0){
            j=x;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++; //Move j to next zero
        }
    }

}

int main() {
    vector<int> array={1,0,5,2,3,5,0,1,0};
    move0_opt(array);
    for(int i : array){
        cout<<i<<" ";
    }
    return 0;
}