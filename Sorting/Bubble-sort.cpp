#include <iostream>
#include <vector>
#include <algorithm>
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

//We add a condition in this to check if array is already sorted, which helps in reducing unwanted time taken for regularly passing through the sorted array.
//The largest element of unsorted array bubbles up at the end of the unsorted array, hence we can keep reducing the number of iterations. j=arr.size()-i-1;
void bubble_sort(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        int flag = 0;
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                flag++;
            }
        }
        if(flag == 0) break;
    }
}

int main() {
    vector<int> array = {1,2,8,5,3};
    bubble_sort(array);
    printArr(array);
    return 0;
}