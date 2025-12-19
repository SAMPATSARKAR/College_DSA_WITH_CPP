#include<bits/stdc++.h>
using namespace std;
class HashMap{
    public:
    vector<vector<pair<string,int>>> table;
    int size;
    HashMap(){
        size =100;
        table.resize(size);
    }
    int hashFunction( string& key){//rolling hashing
    
        int ch=0;
        int size=key.size();
        for(int i=0;i<key.size();i++){
            ch+=int(key[i])*(i+1);
        }
        return ch%size;
    }
    int get(string key){
        int index = hashFunction(key);
        for(int i=0;i<table[index].size();i++){
            if(key == table[index][i].first){
                return table[index][i].second;
        }
    }
    return -1;
};
    void push(string key,int value){
        int index = hashFunction(key);
        table[index].push_back({key, value});
    }
    void remove(string &key){
        int index = hashFunction(key);
        for(int i=0;i<table[index].size();i++){
            if(key == table[index][i].first){
                table[index].erase(table[index].begin()+i);
            }
        }
    }
    //s.find()
};
int main(){
        HashMap a;
        a.push("10",2);
        a.push("1",21);
        a.push("2",23);
        a.push("3",24);
        cout<<a.get("1")<<endl;
        remove("1");
        cout<<a.get("1")<<endl;
        return 0;
}