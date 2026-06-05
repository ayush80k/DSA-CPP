#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr){
    cout<<"Array = ";
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<"\n";
}
void swap(int& a,int& b){
    int temp = a;a=b;b=temp;
}

//Select the minimum element in the array, and put it at the begining of the array. assume initially the first element is the minimum. keep repating this until all elemtns are sorted.

void selectionSort(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){ //the last elemnt will already be at its sorted position so we run only till before arr.size - 1.
        int min_index = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        if(min_index!=i) swap(arr[i],arr[min_index]);
    }
}

int main() {
    vector<int> array = {5,1,7,3,2};
    selectionSort(array);
    printArr(array);
    return 0;
}