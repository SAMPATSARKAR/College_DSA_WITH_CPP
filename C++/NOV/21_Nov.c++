// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;


template<typename T>
class Myvector{
    
    private :
    
    T * arr ;
    int capacity ;
    int size ;
    
    
    void resize(){
        this->capacity *=2 ;
        T * temp = new T[capacity] ;
        for(int i =0 ;i<size;i++)
        {
            temp[i] = arr[i] ;
        }
        delete [] arr ;
        this->arr = temp ;
    }
    
    public :
    Myvector(int capacity = 10){
        this->capacity = capacity ;
        this->size = 0 ;
        this->arr = new T[capacity] ;
    }
    
    // copy constructor 
    Myvector(Myvector& a){
        this->capacity=a.capacity;
        this->size = a.size;
        this->arr = new T[this->capacity];
        for(int i=0;i<this->size;i++){
            this->arr[i]=a.arr[i];
        }

    }
    
    
    void push_back(int x){
        if(size == capacity){
            this->resize();
        }
        this->arr[this->size++] = x ;
    }
    
    void pop_back(){
        this->size--  ;
    }
    
    T operator [](int index){
        if (index <0 || index > size-1){
            cout <<"Invalid index" ;
            return -1 ;
        }
        return this->arr[index] ;
    }

    int getSize(){
        return this->size;
    }
    
    
} ;

int main() {
   
   Myvector<int> arr ;
   arr.push_back(1) ;
   arr.push_back(2) ;
   arr.push_back(3) ; 
   arr.push_back(4) ;
   arr.push_back(5) ;
   arr.pop_back();
   

   for(int i =0 ;i<arr.getSize() ;i++){
       cout<<arr[i]<<" ";
   }cout<<endl;
   Myvector<int> s(arr);
   for(int i =0 ;i<s.getSize() ;i++){
       cout<<s[i]<<" ";
   }
   

    return 0;
}