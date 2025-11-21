#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    v.insert(v.begin() +1,15);
    for(int x:v){
        cout<<x<<" ";
    }cout<<endl;
    stack<int> x;
    x.push(10);
    x.push(20);
    x.push(30);
    x.push(40);
    x.push(50);
    x.pop();
    cout<<x.top()<<endl;
}