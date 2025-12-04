// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int partiton(vector<int> &arr , int low , int high){
    int pivot = arr[high] ;
    int i = low -1 ;

    for(int j = low ;j<=high -1 ;j++){
        if(arr[j] < pivot){
            i++ ;
            swap(arr[i] , arr[j]) ;
        }
    }


    swap(arr[i+1] , arr[high]) ;

    return i+1 ;


}

void quickSort(vector<int> &arr , int low , int high) {

    if(low >= high){
        return ;
    }

    int pivotIdx = partiton(arr , low , high);

    quickSort(arr , low , pivotIdx-1) ;
    quickSort(arr ,pivotIdx+1 , high) ;


}

int main() {

    vector<int> arr = {1 ,9 ,2 ,1 ,3 ,4 ,5 ,3 , 6};
    quickSort(arr , 0 , arr.size() -1) ;
    for(int i = 0;i<arr.size() ;i++) {
        cout<<arr[i]<<" " ;
    }

    return 0;
}