#include<bits/stdc++.h>
using namespace std;
//hashmap using chaining-best case:- O(1), worst:- O(n);
//open addresing technique
    //--- linear probing, quadratic probing, double hashing

// unodered _set -- only key
        //finding element in set - s.find()
        //to iterate till end - s.end()
        // if(s.find(10) != s.end())->found till end
        
//unordered_map == both key:val

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