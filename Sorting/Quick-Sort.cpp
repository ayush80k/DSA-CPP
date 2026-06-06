#include <iostream>
#include <vector>
using namespace std;

void swap_num(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int quick(vector<int>& arr,int low, int high){
    //Using Pivot == first element
    int i=low,j=high,pivot=arr[low];
    while(i<j){
        while(i<=high && arr[i]<=pivot){
            i++; //Using i to find greater element
        }
        while(j>=low && arr[j]>pivot){
            j--; //Using j to find smaller element
        }
        if(i<j){
            swap_num(arr[i],arr[j]);
        }
    }
    swap_num(arr[j],arr[low]); //In the end j will be pointing to correct position of the pivot arr[low].
    return j;//j is the correct index of pivot, and act as partition index of array.
}

void quickSort(vector<int>& arr,int low, int high){
    if(low>=high) return;
    int partition_index = quick(arr,low,high);
    quickSort(arr,low,partition_index-1);
    quickSort(arr,partition_index+1,high);
}

int main() {
    vector<int> array = {4,8,2,5,6,1};
    quickSort(array,0,array.size()-1);
    for(int i : array){
        cout<<i<<" ";
    }
    return 0;
}