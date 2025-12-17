// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a = 'a';
//     void* ptr = &a;//void pointer cant be deferenced
//     cout<<*((char*)ptr)<<endl;
// }
// ------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void Dualcase(char* arr,int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]>='A' && arr[i]<='Z'){
//             arr[i]=arr[i]+32;
//         }else if(arr[i]>='a' && arr[i]<='z'){
//             arr[i]=arr[i]-32;
//         }else{
//             cout<<"Invalid";
//         }
//     }
// };
// void cases(char* arr,int size){
//     while(arr[i]!='/0'){
//         if(arr[i]>=97 && arr[i]<=122){
//             arr[i]-=32;
//         };
//         i++;
//     }
// }
// int main(){
//     char arr[5]={'a','B','c','D','e'};
//     int size =5;
//     Dualcase(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// ----------------------------pointer & arr diff------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// char* ptr = "abcd";//points to rom, so cant be changed,so immutable;
// char arr[]="abcd";//its on stack so mutable;
// arr[0]='k';
// // ptr[0]='k';
// // cout<<ptr[0]<<endl;
// cout<<arr[0]<<endl;
// }
// -----------------------------problem in string && cin.ignore && getline --------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     cin.ignore();
//     string b;
//     getline(cin,b);

//     cout<<a<<endl;
//     cout<<b<<endl;
// }
// -------------------------------------question converting to char from string
#include<bits/stdc++.h>
using namespace std;
void store(string arr){
    // string arr2;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i] !=' '){
    //         arr2+=arr[i];
    //     }
    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr2[i];
    // }cout<<endl;
    for(char c:arr){
        if(c!=' '){
            cout<<c;
        }
    }
}
int main(){
    string arr = "I am learning";
    store(arr);

}
// --------------------split into tokens
#include<bits/stdc++.h>
using namespace std;
void store(string arr){
    // string arr2;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i] !=' '){
    //         arr2+=arr[i];
    //     }
    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr2[i];
    // }cout<<endl;
    
}
int main(){
    string arr = "I am learning";
    store(arr);

}