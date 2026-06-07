#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotN(vector<int>& arr,int rot){ //Brute force approach
    if(arr.size()==0) return;
    rot = rot%arr.size();
    vector<int> temp;
    for(int i=0;i<rot;i++){
        temp.push_back(arr[i]); //teporarily store the starting elements
    }
    for(int i=rot;i<arr.size();i++){
        arr[i-rot] = arr[i]; // shift remaining elements left
    }
    for(int i=arr.size()-rot;i<arr.size();i++){
        arr[i] = temp[i-(arr.size()-rot)]; //put back the elements from temp array back to arr.
    }
}

void reverseArr(vector<int>& arr,int start,int end){
    while(start<end){
        swap(arr[start++],arr[end--]);
        // start++;
        // end--;
    }
}

void leftRotN_opt(vector<int>& arr,int rot){
    if(arr.size()==0) return;
    rot = rot%arr.size();
    reverseArr(arr,0,rot-1); //Rverse the array from 0 to the required rotation places 
    reverseArr(arr,rot,arr.size()-1); // Now reverse the rest of the array
    reverseArr(arr,0,arr.size()-1); // Then reverse the whole array
}

//For rotating to right instead of left: x rotations to right == array.size - x   rotations to left.

//or
void rightRot(vector<int>& nums, int k) {
    if(nums.empty()) return;
    k = k % nums.size();
    if(k == 0) return;
    
    // 1. Reverse the back chunk of size k
    reverseArr(nums, nums.size() - k, nums.size() - 1); 
    
    // 2. Reverse the front remaining chunk
    reverseArr(nums, 0, nums.size() - k - 1); 
    
    // 3. Reverse the entire array
    reverseArr(nums, 0, nums.size() - 1); 
}

int main() {
    vector<int> array={1,2,3,4,5,6},arr2= {10,11,12,13,14};
    leftRotN_opt(array,2);
    for(int i: array){
        cout<<i<<" ";
    }
    cout<<endl;
    rightRot(arr2,2);
    for(int i: arr2){
        cout<<i<<" ";
    }
    return 0;
}