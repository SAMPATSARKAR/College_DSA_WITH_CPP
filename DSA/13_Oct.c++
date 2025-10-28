#include <iostream>
using namespace std;
void insert(int arr[],int* size,int val,int index=-1){
    //right shift
    if(index == -1){
        index = *size;
    }
    for(int i = *size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    (*size)++;
};
void delete1(int arr[],int* size,int index =-1){
    if(index == -1){
        (*size)--;
        return;
    }
    for(int i= index;i< *size-1;i++){
        arr[i]=arr[i+1];
    }
    (*size)--;
};
int search(int arr[],int size,int target){
    // cout<<*size<<endl;
    for(int i =0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    // int arr[100];
    // int size = 0;
    // int arr1[]= {1,2,3,4,5,6,7};
    // int n = 7;
    // int pos;
    // cin>>pos;
    // int val;
    // cin>>val;
    // if(pos < 0 || pos>n){
    //     cout<<"Invalid pos"<<endl;
    //     return 0;
    // }
    // for(int i = n;i>pos;i--){
    //     arr1[i] =arr1[i-1];

    // }
    // arr1[pos] = val;
    // n++;
    // for(int i = 0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    int arr[100];
    int size = 0;
    insert(arr,&size,10);
    insert(arr,&size,30);
    insert(arr,&size,40,1);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // delete1(arr,&size);
    // for(int i = 0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    cout<<search(arr,3,30)<<endl;
}
// ---------------
// #include<iostream>
// using namespace std;
// void insert(int* arr,int* n,int e,int p){
//     // if(p == n || p == NULL){
//     //     arr[n]=e;
//     //     return 0;
//     // }
//     if(p<0 || p>*n){
//         cout<<"Invalid position"<<endl;
//         return;
//     }
//     //right shift
//     for(int i =*n;i>p;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[p]=e;
//     (*n)++;


// };
// void delete1(int* arr,int* n,int p){
//     if(p<0 || p>*n){
//         cout<<"Invalid Position";
//         return;
//     }
//     //left shift
//     for(int i = p;i < *n;i++){
//         arr[i]=arr[i+1];

//     }
    
//     (*n)--;
// };

// int main(){
//     int n;
//     cout<<"Enter size of array:- ";
//     cin>>n;
//     int e;
//     cout<<"Enter element to add:- ";
//     cin>>e;
//     int p;
//     cout<<"Enter position to add:- ";
//     cin>>p;

//     int* arr = new int[100];
//     cout<<"Enter elements of the array:- ";

//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     insert(arr,&n,e,p);
//     for(int i = 0;i<n;i++){
//         cout<<arr[i];
//     }cout<<endl;
//     delete1(arr,&n,2);
//     for(int i = 0;i<n;i++){
//         cout<<arr[i];
//     }cout<<endl;
//     delete arr;
//     arr = nullptr;

// }