#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int>& arr){
    cout<<"Array = ";
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void merge(vector<int>& arr,int low,int high){
    vector<int> temp;
    int left = low, mid = (low+high)/2,right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}

void mergeSort(vector<int>& arr,int low,int high){
    int mid = (low+high)/2;
    if(low>=high) return;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}

int main() {
    vector<int> array = {5,1,7,5,3,2};
    cout<<"Before Sorting ";
    printArr(array);
    mergeSort(array,0,array.size()-1);
    cout<<"After Sorting ";
    printArr(array);
    return 0;
}