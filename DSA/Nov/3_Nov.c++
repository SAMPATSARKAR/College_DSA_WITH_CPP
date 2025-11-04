#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next = NULL;
    }

};
void insertAthead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
};
node* temp = new node(data);
void insertAttail(node* &head,int data){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* n1 = new node(data);
    temp->next = n1;

    
    
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
};
int main(){
node* head = new node(1);
insertAthead(head,2);
print(head);
insertAttail(head,5);
print(head);
}