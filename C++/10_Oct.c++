// ------------reverse an array 
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[4]={3,4,5,6};
//     int temp = 0;
//     int n = 4;
//     for(int i = 0 ; i< n/2;i++){
//         temp = arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for(int i = 0 ;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// ---------------------is sorted
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int sorted (int *arr,int n){
//     // bool isSorted = false;
//     for(int i = 0 ; i < n-1 ; i ++){
//         if (arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;

// };
// int main(){
//     int arr[4]={4,3,5,6};
//     int x = sorted(arr,4);
//     if(x==1){
//         cout<<"Is Sorted"<<endl;
//     }else{
//         cout<<"Not sorted"<<endl;
//     }


// }
// ----------------second largest in one pass---------
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4]={1,2,3,4};
//     int max = 0;
//     int next = 0;
//     for(int i = 0 ; i < 4;i++){
//         if(arr[i]>max){
//             next = max;
//             max = arr[i];
//         }else if(arr[i]>next && arr[i]<max){
//             next = arr[i];
//         }
//     }
//     cout<<"2nd largest is"<<max<<" "<<next<<endl;
// }
// -----------------enter a element an array in an index-------
// #include <iostream>
// using namespace std;
// void insert(int* arr,int p,int d,int n){
//     for(int i = n;i>p-1;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[p]=d;
//     n++;
// };
// int main(){
//     int arr[10]={1,2,4,5,6};
//     insert(arr,0,3,5);
//     for(int i = 0 ; i< 6;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }