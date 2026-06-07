#include <iostream>
#include <vector>
using namespace std;

void leftRot_by1(vector<int>& arr){
    int hold=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1] = hold;
}

void leftRot_Recur(vector<int>& arr,int rot){ //not optimal
    if(rot<=0) return;
    int hold=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1] = hold;
    leftRot_Recur(arr,rot-1);
}

int main() {
    vector<int> array = {1,2,3,4,5};
    leftRot_Recur(array,2);
    for(int i : array){
        cout<<i<<" ";
    }
    return 0;
}