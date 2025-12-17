#include<bits/stdc++.h>
using namespace std;
class HashMap{
    public:
    vector<vector<pair<int,int>>> table;
    int size;

    HashMap(){
        int size = 10;
        table.resize(size);
    }
    bool get(int key){
        int hash = key%size;
        return table[hash];

    }
    void put(int data){
        int hash = data%size;
        table[hash]=true;
        
    }



};
int main(){

    HashMap map;
    map.put(10);
    map.put(6);
    map.put(23);
    cout<<map.get(23)<<endl;
    return 0;
}