// #include <iostream>
// using namespace std;
// bool primeNo(int n){
//     bool isprime = true;
//     if(n%2==0){
  
//       isprime=false;
//     }
//     return isprime;
// }
// int main(){
//     int n;
//     cout<<"Enter a number to check if prime or not"<<endl;
//     cin>>n;
//     bool c = primeNo(n);
//     if(c){
//         cout<<"Prime"<<endl;
//     }else
//     {
//         cout<<"Not prime"<<endl;
//     }
    
// }
// ----------triangle-------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number:- "<<" ";
//     cin>>n;
//     int i = 0 ;
//     while(i<n){
//         int j = n-i;
//         while(j){
//             cout<<" "<<" ";
//             j--;
//         }
//         int k = 0;
//         while(k<=i){
//             cout<<"*"<<" ";
//             k++;
//         }
//         int l = 0;
//         while(l<i){
//             cout<<"*"<<" ";
//             l++;
//         }
//         i++;
//         cout<<endl;
        
//     }
// }
// -------------fibo-----------
// #include <iostream>
// using namespace std;
// int fibo(int n){
//     // if(n==0){
//     //     return 0;
//     // }
//     if(n<=1){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// };
// int main(){
//     int n;
//     cin>>n;
//     int a = fibo(n);
//     cout<<"Number is :- "<<a<<endl;
// }
// -------------palindrome--------
// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter a number:- "<<" ";
//     cin>>n;
//     int original = n;
//     int copy=0;
    
//     while(n!=0){
//         int digit=n%10;
//         copy = copy*10+digit;
//         n=n/10;
//     }
    
//     if(copy == original){
//         cout<<"Palindrome"<<endl;
//     }
//     else
//     {
//         cout<<"Not a palindrome"<<endl;
//     }
// }
// ---------factorial----------
// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n<=1){
//         return n;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter a number:- "<<" ";
//     cin>>n;

//     cout<<"Factorial is:- "<<fact(n)<<endl;
// }
// ----------------multiplication table
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=10;i++){

//         cout<<n<<"x"<<i<<"="<<n*i<<endl;
//     }
// }
// -------------reverse a number----------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n!=0){
//         int digit = n%10;
//         reverse = reverse*10+digit;
//         n=n/10;
//     }

//     cout<<reverse<<endl;

    
// }
// --------rectangle--------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<=n){
//         int j=0;
//         while(j<n){
//             cout<<"*"<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
    
// }
// --------hollow rectangle-----
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<n){
//             if(i==0 || i==n-1 || j==0||j==n-1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//             j++;
            
//         }
//         cout<<endl;
//         i++;
//     }
// }
// ------------right angle triangle---------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }
// -----------------x pattern---------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<n){
//             if(i==j||i+j==n-1){
//                 cout<<"*"<<" ";
//             }else{
//                 cout<<" ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// ---------------function----------------
