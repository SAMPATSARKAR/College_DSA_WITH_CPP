// #include <iostream>
// using namespace std;
// struct rectangle{
//     int h;
//     int w;
// };
// int area(rectangle r){
//     return r.h*r.w;
// }
// int main(){
//     rectangle r;
//     r.h=10;
//     r.w=5;
//     cout<<area(r)<<endl;
// }
// ------------------------------Highest mark bw students--------------------


// #include <iostream>
// #include <string>
// using namespace std;
// struct student{
//     string name;
//     int marks;
// };
// void highestMarks(student marks1,student marks2,student marks3){
//     student topperMarks = marks1;
//     if(marks2.marks>topperMarks.marks){
//         topperMarks = marks2;
//     }else if(marks3.marks>topperMarks.marks){
//         topperMarks = marks3;
//     }
//     cout<<"Toppers marks is:- "<<topperMarks.marks<<endl<<"Toppers name is "<<topperMarks.name<<endl;


// }

// int main(){
//     student a,b,c;
//     a.name="sam";
//     a.marks = 100;

//     b.name="raj";
//     b.marks = 90;

//     c.name = "ekta";
//     c.marks = 95;
//     // cout<<a.name<<endl;
//     highestMarks(a,b,c);
    
// }

//------------------------------ Highest marks done in sirs method-------------------------

// #include <iostream>
// #include <string>
// using namespace std;
// struct student{
//     string name;
//     int marks;

// };
// void maxMarks(student* arr,int n){
//     int max = 0;
//     string name = "";
//     for(int i=0;i<n;i++){
//         if(arr[i].marks>max){
//             max = arr[i].marks;
//             name = arr[i].name;
//         }
//     }
//         cout<<"Toppers marks is:- "<<max<<endl<<"Toppers name is "<<name<<endl;

    

// }
// int main(){
// int n;
// cout<<"Enter no of entries:- ";
// cin>>n;
// student arr[5]={};
// for(int i = 0 ; i <n;i++){
//     cout<<"Enter a name:- ";
//     cin>>arr[i].name;
//     cout<<"Enter marks:- ";
//     cin>>arr[i].marks;
// }cout<<endl;
// maxMarks(arr,5);

// }
// ---------------------------Highest marks done with dynamically----------
// #include <iostream>
// #include <string>
// using namespace std;
// struct student{
//     string name;
//     int marks;

// };
// void maxMarks(student* arr,int n){
//     int max = 0;
//     string name = "";
//     for(int i=0;i<n;i++){
//         if(arr[i].marks>max){
//             max = arr[i].marks;
//             name = arr[i].name;
//         }
//     }
//         cout<<"Toppers marks is:- "<<max<<endl<<"Toppers name is "<<name<<endl;

    

// }
// int main(){
// int n;
// cout<<"Enter no of entries:- ";
// cin>>n;
// student* arr=new student[n];//created an array dynamically
// for(int i = 0 ; i <n;i++){
//     cout<<"Enter a name:- ";
//     cin>>arr[i].name;
//     cout<<"Enter marks:- ";
//     cin>>arr[i].marks;
// }cout<<endl;
// maxMarks(arr,n);

// }