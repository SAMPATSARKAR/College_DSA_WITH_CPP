// // pair sum
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(int* arr,int n,int target){
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         for(int j =i+1;j<n;j++)
//             if(arr[i]+arr[j]==target){
//                 v.push_back(arr[i]);
//                 v.push_back(arr[j]);
//             }
//     }
//     return v;
// };
// vector<int> PairSum(int* arr,int n, int target){
//     vector<int> v1;
//     int i=0;
//     int j=n-1;
//     while(i<j){ //T.C.-O(n)
//         if(arr[i]+arr[j]==target){
//             v1.push_back(arr[i]); 
//             v1.push_back(arr[j]); 
//             i++;
//             j--;
//         }
//         else if(arr[i]+arr[j]>target){
//             j--;
//         }else{
//             i++;
//         }
//     }
//     return v1;

// };
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = 5;
//     // vector<int> x = pairSum(arr,n,5);
//     vector<int> x = PairSum(arr,n,5);
//     for(int c:x){
//         cout<<c<<" ";
//     }cout<<endl;
//     return 0;
// }
// -----------------
// #include <iostream>
// using namespace std;
// void moveZeros(int* arr,int n){

//     int i =0;
//     for(int j = 0;j<n;j++){
//         if(arr[j]!=0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }


// }
// int main(){
//     int arr[5]={0,0,1,2,3};
//     moveZeros(arr,5);
//     for(int i =0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// --------------------------------------
#include <iostream>
using namespace std;
int RemoveDuplicate(int* arr,int n){

    // if(arr.size()==0){
    //     return 0;
    // }
    int i=0;//slow pointer
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    
    }
    return i+1;


}
int main(){
    int arr[5]={0,0,1,2,3};
    int newLen=RemoveDuplicate(arr,5);
    for(int i =0;i<newLen;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}