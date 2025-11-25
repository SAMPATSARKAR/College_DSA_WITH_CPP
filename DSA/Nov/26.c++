// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

template<typename T>
class List {
    
    // pure virtual functions 
    // abstract class is which contains at least one pure virtual function 
    // abstract class can't be intansiated , Object cant be created 
    virtual void push_back(T x) = 0;
    virtual void pop_back()  = 0;
    virtual void insert(T x , int pos) =  0;
    virtual void pop_back(int pos) = 0 ;
} ;

// inheritance 
// 1) public :  access modifier will not be changed in child class 
// 2) protected :  public ---> protected 
// 3) private :  public , protected ---> private 
template<typename T>
class ArrayList : public List<T> {
private:
    T* arr;
    int size;
    int capacity;

public:
    ArrayList(int capacity = 5) {
        this->arr = new T[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    ~ArrayList() {
        delete[] arr;
    }

    // Index operator
    //. operator overloading 
    T operator[](int pos) {
        if (pos >= size || pos < 0) {
            cout << "Invalid index\n";
            return T();  // Return default value
        }
        return arr[pos];
    }

    void push_back(T x) override {
        if (size == capacity) {
            cout << "Array full\n";
            return;
        }
        arr[size++] = x;
    }

    void pop_back() override {
        if (size > 0)
            size--;
    }

    void insert(T x, int pos) override {
        if (pos < 0 || pos > size) {
            cout << "Invalid index\n";
            return;
        }
        if (size == capacity) {
            cout << "Array full\n";
            return;
        }

        for (int i = size; i > pos; i--)
            arr[i] = arr[i - 1];

        arr[pos] = x;
        size++;
    }

    void pop_back(int pos) override {
        if (pos < 0 || pos >= size) {
            cout << "Invalid index\n";
            return;
        }

        for (int i = pos; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;
    }
};


template<typename T>
class Node{
    public:
    T data ;
    Node<T>* next ;
    Node(T d):data(d), next(nullptr) {}
};

template<typename T>
class LinkedList : public  List<T>{
    private :
    Node<T>* head ; 
    Node<T>* tail ;
    int size ;
    
    public : 
    LinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    ~LinkedList() {
        Node<T>* temp = head;
        while (temp) {
            Node<T>* nxt = temp->next;
            delete temp;
            temp = nxt;
        }
    }
    
    T operator[](int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid index\n";
            return T();
        }
        Node<T>* temp = head;
        for (int i = 0; i < pos; i++)
            temp = temp->next;
        return temp->data;
    }
    
    void push_back(T x) override{
        Node<T>* newNode = new Node<T>(x);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void pop_back() override {
        if (!head) return;

        if (head == tail) {
            delete head;
            head = tail = nullptr;
            size = 0;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != tail)
            temp = temp->next;

        delete tail;
        tail = temp;
        tail->next = nullptr;
        size--;
    }

    void insert(T x, int pos) override {
        if (pos < 0 || pos > size) {
            cout << "Invalid index\n";
            return;
        }

        if (pos == size) { // insert at end
            push_back(x);
            return;
        }

        Node<T>* newNode = new Node<T>(x);

        if (pos == 0) { // at head
            newNode->next = head;
            head = newNode;
            if (size == 0)
                tail = newNode;
        } else {
            Node<T>* temp = head;
            for (int i = 0; i < pos - 1; i++)
                temp = temp->next;

            newNode->next = temp->next;
            temp->next = newNode;
        }
        size++;
    }

    void pop_back(int pos) override {
        if (pos < 0 || pos >= size) {
            cout << "Invalid index\n";
            return;
        }

        if (pos == size - 1) { // last element
            pop_back();
            return;
        }

        if (pos == 0) { // head
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            if (size == 1)
                tail = nullptr;
        } else {
            Node<T>* temp = head;
            for (int i = 0; i < pos - 1; i++)
                temp = temp->next;

            Node<T>* del = temp->next;
            temp->next = del->next;
            if (del == tail)
                tail = temp;
            delete del;
        }
        size--;
    }
};

    
    
    




int main() {
      ArrayList<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Print a number in array"<<endl;
    cout << arr[1] << endl; 
    
    arr.insert(15, 1);
    cout << "Inserted  "<<arr[1] << endl;  
    
    arr.pop_back(2);
    cout <<"Removed "<< arr[2] << endl; 

    cout<<"Again printing"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
// --------------linked list-------------
    cout<<"Linked List"<<endl;

    LinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.insert(15, 1);      // 10 15 20 30
    cout << list[1] << endl; // 15
    list.pop_back(2);        // delete element at index 2 -> 10 15 30
    cout << list[2] << endl; // 30

    return 0;


}