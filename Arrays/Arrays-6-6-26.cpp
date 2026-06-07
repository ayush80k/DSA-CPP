#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int find_max(vector<int>& arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int find_second_max(vector<int>& arr){
    int max = arr[0],sec_lar = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]> max) max = arr[i];
        if(arr[i]< sec_lar) sec_lar = arr[i]; //Initially we store the minimum element in second largest.
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>sec_lar && arr[i]<max) sec_lar=arr[i]; //keep replacing sec_lar until it ends up as second largest element.
    }
    return sec_lar;
}

int find_second_max_opt(vector<int>& arr){
    int sec_lar = INT_MIN,max = arr[0];
    for(int i=1;i<arr.size();i++){ //Start at 1 since i=0 is already in max. 
        if(arr[i]>sec_lar){
            if(arr[i]<max){
                sec_lar = arr[i];
            }
            else if(arr[i]>max){ 
                sec_lar=max; //Update the second largest element as the previously largest element
                max = arr[i]; 
            }
        }
    }
    return sec_lar;
}

bool isSorted(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){ // or, can do i=1, i<arr.size(),i++ , then arr[i]<arr[i-1]
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main() {
    vector<int> array = {1,2,4,5};
    cout<<"Maximum = "<<find_max(array)<<endl;
    cout<<"Second Maximum = "<<find_second_max_opt(array)<<endl;
    cout<<(isSorted(array)?"Sorted":"Not Sorted")<<endl;
    return 0;
}