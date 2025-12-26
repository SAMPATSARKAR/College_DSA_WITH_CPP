#include<bits/stdc++.h>
using namespace std;
//graph has entities called as nodes

//graph has edges - contains weight like edge weight or may not contain weight
                //-edges shows relationship
                
//graph can be directed and undirected
// graph can be weighted or not weighted
//graph can be cyclic or acyclic :- can be understood by name

//graph representation- always look at the arrow
        // -adjacency matrix 
        // -adjacency list
        // -edge list




//adjacency matrix
vector<pair<int,int>> v = {{0,0}};
int main(){
    v.push_back({1,2});
    v.push_back({1,3});
    v.push_back({2,4});
    v.push_back({2,5});
    

    // adjacency matrix
    int arr[6][6]={0};

    for(auto edge:v){
        int u = edge.first;
        int w = edge.second;
        arr[u][w]=1;
        arr[w][u]=1;
    }
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
    }

}
//adjancency list
