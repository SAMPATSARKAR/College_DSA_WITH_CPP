class Node {
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = next = nullptr;
    }
};

class myDeque {
    Node* front;
    Node* rear;
  public:
    myDeque() {
        front = NULL;
        rear = NULL;
    }

    void insertFront(int x) {
        Node* newNode = new Node(x);
        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }

    void insertRear(int x) {
        Node* newNode = new Node(x);
        if(rear == NULL){
            front = newNode;
            rear = newNode;
        }else{
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
        }
    }

    void deleteFront() {
        if(front == NULL){
            return;
        }
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }else{
            front->prev = NULL;
        }
    }

    void deleteRear() {
        if(rear == NULL){
            return;
        }
        Node* temp = rear;
        rear = rear->prev;
        if(rear == NULL){
            front = NULL;
        }else{
        rear->next = NULL;
        }
        delete temp;
    }

    int getFront() {
        if(front == NULL){
            return -1;
        }
        return front->data;
    }

    int getRear() {
        if(rear == NULL){
            return -1;
        }
        return rear->data;
    }
};
