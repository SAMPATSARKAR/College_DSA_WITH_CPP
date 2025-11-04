// ------------------linear search--------
// #include <iostream>
// using namespace std;
// void insert(int arr[],int* size,int val,int index=-1){
//     //right shift
//     if(index == -1){
//         index = *size;
//     }
//     for(int i = *size;i>index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=val;
//     (*size)++;
// };
// void delete1(int arr[],int* size,int index =-1){
//     if(index == -1){
//         (*size)--;
//         return;
//     }
//     for(int i= index;i< *size-1;i++){
//         arr[i]=arr[i+1];
//     }
//     (*size)--;
// };
// int search(int arr[],int size,int target){
//     // cout<<*size<<endl;
//     for(int i =0;i<size;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     // int arr[100];
//     // int size = 0;
//     // int arr1[]= {1,2,3,4,5,6,7};
//     // int n = 7;
//     // int pos;
//     // cin>>pos;
//     // int val;
//     // cin>>val;
//     // if(pos < 0 || pos>n){
//     //     cout<<"Invalid pos"<<endl;
//     //     return 0;
//     // }
//     // for(int i = n;i>pos;i--){
//     //     arr1[i] =arr1[i-1];

//     // }
//     // arr1[pos] = val;
//     // n++;
//     // for(int i = 0;i<n;i++){
//     //     cout<<arr1[i]<<" ";
//     // }
//     int arr[100];
//     int size = 0;
//     insert(arr,&size,10);
//     insert(arr,&size,30);
//     insert(arr,&size,40,1);
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     // delete1(arr,&size);
//     // for(int i = 0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }cout<<endl;
//     cout<<search(arr,3,30)<<endl;
// }
// --------------bubble-sorting-------------

// #include <iostream>
// using namespace std;
// void bubbleSort(int* arr,int n){
//     for(int i =0 ;i<n-1;i++){
//         bool isSwapped = false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 // swap(arr[i],arr[j]);
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 isSwapped = true;
//             }
//         }
//         if(!isSwapped) break;
//     }
// }
// int main(){
//     int arr[5]={2,3,5,1,4};
//     int size =5;
//     bubbleSort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }cout<<endl;
// }
// -------------------another way---------------
// #include <iostream>
// using namespace std;
// int bubbleSort(int* arr,int n){
//     int count=0;
//     for(int i =0 ;i<n-1;i++){
//         count++;
//         bool isSwapped = false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 // swap(arr[i],arr[j]);
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 isSwapped = true;
//             }
//         }
//         if(!isSwapped) break;
//     }
//     return count;
// };
// int main(){
//     // int arr[5]={2,3,5,1,4};
//     int arr[5]={1,2,3,4,5};
//     int size =5;
//     cout<<bubbleSort(arr,size)<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }cout<<endl;
// }
// ---------------------------Selection Sort--------------------
// #include <iostream>
// using namespace std;
// void selectionSort(int* arr,int n){
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         int j=i+1;
//         for(;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);    
//     }
// }
// int main(){
//     int arr[5]={2,3,1,4,5};
//     int size=5;
//     selectionSort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// -------------------------