//void pointer

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     void* ptr = &a;
//     cout<<*(int *)ptr<<endl;
//     //pointer can be incremented
// }
// --------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ptr = &a;
//     //pointer can be incremented
//     // ptr++;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
    
// }
// ----------------------------------pass by reference
// #include <iostream>
// using namespace std;
// int add(int* a){
//     int b = ++*a;
//     return b;
// }
// int main(){
//     int a = 5;
//     // int b = 6;

//     // cout<<&a<<"  "<<&b<<endl;
//     cout<<add(&a)<<endl;
// }
// -----------------------pass by value
// #include <iostream>
// using namespace std;
// void add(int a){
//     int b = ++a;
//     cout<<b<<endl;
// }
// int main(){
//     int a = 5;

//     add(a);
//     cout<<a<<endl;
// }

// ------------------------------------array-address is cal by compiler= baseaddress*i*c{i=any index,c=amt of size of data type}
// #include <iostream>
// using namespace std;
// int main(){
//     int arr [] ={1,2,3,4,5};
//     int* ptr = arr;
//     ptr++;
//     cout<<*ptr<<endl;
//     cout<<arr<<endl;
//     int i = 0;
//     while(i<5){
//         cout<<arr[i]<<" ";
//         i++;
//     }cout<<endl;
//     int x = sizeof(arr)/sizeof(int);
//     cout<<x<<endl;
//     cout<<endl;
// }
// ---------------------------find max
// #include <iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr [5] ={1,2,3,4,5};
//     int max=INT_MIN;
//     int i = 0;
//     while(i<5){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         i++;

//     }
//     cout<<max<<endl;
// }

// -----------------sum of all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int i=0;
//     int sum=0;
//     while(i<5){
//         sum += arr[i];
//         i++;
//     }
//     cout<<"Sum is"<<sum<<endl;
// }
// --------------2nd largest---------
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int secondLargest(int* arr,int n){
    sort(arr,arr+n);
    for(int i = n-2;i>=0;i--){
        if(arr[n-2] != arr[n-1]){
            return arr[n-2];
        }
    }
    return -1;
}
int main(){
    int arr[5]={3,2,4,1,5};
    
    int size = 5;
    cout<< secondLargest(arr,size)<<endl;    
}