#include<bits/stdc++.h>
using namespace std;
//hashmap using chaining
class HashMap{
    public:
    vector<vector<pair<int,int>>> table;
    int size;
    HashMap(){
        size=10;
        table.resize(size);
    }

    int get(int key){
        int index = key%size;//hashing
        for(int i=0;i<table[index].size();i++){
            if(table[index][i].first == key){
                return table[index][i].second;
            }
        }
        return -1;
    }
    void push(int key, int value){
        int index = key%size;//hashing
        table[index].push_back(pair(key,value));
    }
};
int main(){
    HashMap map;
    map.push(10,2);
    map.push(3,4);
    map.push(7,9);
    map.push(2,1);
    cout<<map.get(3)<<endl;
    return 0;
}