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
void rev(vector <int>& arr){
    int high = arr.size()-1,low = 0;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void insertion_sort(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        int j=i-1, key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j]; //shifts element right. we have already picked up the last value and stored in key.
            j--;
        }
        arr[j+1] = key; //at last j pointing to the sorted digit, so we do j+1 to put at the empty space.
    }
}

int main() {
    vector<int> array = {9,2,8,5,0,1};
    insertion_sort(array);
    rev(array);
    printArr(array);
    return 0;
}