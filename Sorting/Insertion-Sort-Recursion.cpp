#include <iostream>
#include <vector>
using namespace std;

void insert_rec(vector<int>& arr,int i=0){
    if(i>=arr.size()) return;
    int key = arr[i+1];
    int j=i;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    insert_rec(arr,i+1);
}

int main() {
    vector<int> array = {5,1,3,7,2};
    insert_rec(array);

    for(int i : array){
        cout<<i<<" ";
    }
    return 0;
}