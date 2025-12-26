#include<bits/stdc++.h>
using namespace std;

//data keeps on changing in bt and have to find max and min then

//complete bt - no more node can be added in the current ht-no null in the array representation;
//incomplete bt - opp of complete bt- will have null

// heap-complete binary tree where parent is bigger than child tree-no null case will be there;
// -max heap, min heap;

//max - root is bigger than left and right
//min - root is smaller than left and right

//heapify-will get max and min 

// deletion - heapify down - delete the root and make the new heap
// insertion - heapify up - insert in empty space and keep on comparing the root;

// log(n)

class heap{
    public:
    vector<int> data;

    int parent(int i){
        return (i-1)/2;
    }
    int left (int i){
        return 2*i +1;
    }
    int right(int i){
        return 2*i +2;
    }

    void heapifyUp(int i){
        if(i == 0 ){
            return;
        }
        int p = parent(i);
        if(data[i]>data[p]){
            swap(data[i],data[p]);
        }
        heapifyUp(p);
    }
    void insert(int val){
        data.push_back(val);
        heapifyUp(data.size()-1);
    }
    void heapifyDown(int i){
        int l=left(i);
        int r=right(i);
        int largest = i;
        if(l < data.size() && data[l]>data[largest]){
            largest = l;
        }
        if(r < data.size() && data[r]>data[largest]){
            largest = r;
        }
        if(largest != i){
            swap(data[largest],data[i]);
            heapifyDown(largest);
        }

    }
    void deletion(){
        data[0]=data.back();//copy last element in place of root index and remove the element that was beign copied
        data.pop_back();
        heapifyDown(data.size()-1);
    }
    void print(){
        for(int x:data){
            cout<<x<<" ";
        }cout<<endl;
    }
};

int main(){
    heap a;
    a.data = {1,2,4,7,5};
    a.insert(6);
    a.print();
    a.deletion();
    a.print();

    return 0;
}
