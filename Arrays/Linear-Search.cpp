#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> array={3,16,12,22,51,73,30,23};
    int tar;
    cout<<"Enter the element to search- ";
    cin>>tar;
    int found=search(array,tar);
    if(found!=-1){
        cout<<"Element found at index: "<<found;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}