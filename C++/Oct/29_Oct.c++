// substring size/length find replace insert

//substring
// #include<bits/stdc++.h>
// using namespace std;
// string substring(string s,int pos,int n){
//     string str="";
//     for(int i=pos;i<min((int)s.size(),pos+n);i++){
//         str+=s[i];
//     }
//     return str;
// }
// int main(){
//     string a = "sampat";
//     cout<<substring(a,1,3)<<endl;
// }
// ----------------------------------------------------------
//find
// #include <bits/stdc++.h>
// using namespace std;
// int find(string to_find,string a){
//     for(int i=0;i<a.size();i++){
//         string temp="";
//         for(int j=i;j<a.size();j++){
//             temp+=a[j];
//             if(temp==to_find){
//                 return true;
//             }
//     }
//     }
//     return false;
// };
// int main(){
//     int n;
//     string a = "iamt";
//     if(find(a,"sampat")){
//         cout<<"found"<<endl;
//     }else{
//         cout<<"Not found"<<endl;
//     };
// }
// -------------------------------------------------
// #include <iostream>
// #include <string>
// using namespace std;

// string my_substr(string s, int pos, int n) {
//     string ans = "";

//     if (pos < 0 || pos >= (int)s.size())
//         return ans;

//     for (int i = pos; i < min((int)s.size(), pos + n); i++) {
//         ans += s[i];
//     }
//     return ans;
// }


// int  my_find(string s , string sub) {

//     int n = s.size();
//     int m = sub.size();
//     for (int i =0 ;i<=n-m;i++) {
//         bool found = true;
//         for (int j = 0;j<m;j++) {
//             if (s[i+j] != sub[j]) {
//                 found = false;
//             }
//         }
//         if (found) {
//             return i;
//         }
//     }

//     return  -1 ;
// }

// int main() {
//     string s1 = "Abhijeet";
//     cout<<my_find("Abhijeet" , "jeet") ;
// }
// ------------------