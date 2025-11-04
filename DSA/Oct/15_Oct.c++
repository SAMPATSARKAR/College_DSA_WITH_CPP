// ------------insertion sort----------------
// #include <iostream>
// using namespace std;
// class car{
//     public:

//     int move;
//     int speed;

// };
// void insertionSort(int* arr,int n){
//     for(int i=1;i<n;i++){
//         int key;
//         key = arr[i];
//         int j =i-1;
//         while(j>=0 && key<arr[j]){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//         for(int i =0;i<5;i++){
//             cout<<arr[i]<<" ";
//             }cout<<endl;

//     }
// };
// ----------------------------------------------
void insertionSort(int* arr,int n){
    for(int i=1;i<n;i++){
        
        int j = i;

        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        // arr[j+1]=key;
        for(int i =0;i<5;i++){
            cout<<arr[i]<<" ";
            }cout<<endl;

    }
};
int main(){
    // car a;
    // a.move = 10;
    // cout<<a.move<<endl;
    int arr[5]={5,1,2,4,3};
    int size=5;
    insertionSort(arr,size);
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    return 0;
}