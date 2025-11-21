#include<bits/stdc++.h>
using namespace std;
void nge(int* arr,int n){
    stack<int> st;
    int nge[n];
    for(int i=n-1;i>=0;i++){
        if(st.empty()){
            nge[i]=-1;
        }else{
            while(!st.empty() && st.top()<arr[i]){
                st.pop();
            }
        }
    }
    nge[i]=st.top();
    for(int i=0;i<7;i++){
        cout<<nge[i]<<" ";
    }

};
int main(){
    int arr[7]={1,6,3,4,8,1,9}
    int size = 7;
    nge(arr,size);
}