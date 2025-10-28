#include<bits/stdc++.h>
using namespace std;
// encapsulation(raping data member and fxn in class ;access modifier: priate only; getter,setter);
// inheritance(parent class inherited by child class);
// polymorphism(same class behaving diff for diff obj );
// abstraction(remove complexity)#include <iostream>
// using namespace std;

// class Car {
// public:
//     virtual void start() {  // 'virtual' enables runtime polymorphism
//         cout << "Starting a generic car..." << endl;
//     }
// };

// class ElectricCar : public Car {
// public:
//     void start() override {
//         cout << "Starting electric car silently..." << endl;
//     }
// };

// class SportsCar : public Car {
// public:
//     void start() override {
//         cout << "Starting sports car with a roar!" << endl;
//     }
// };

// int main() {
//     Car* c1 = new Car();
//     Car* c2 = new ElectricCar();
//     Car* c3 = new SportsCar();

//     c1->start();  // Output: Starting a generic car...
//     c2->start();  // Output: Starting electric car silently...
//     c3->start();  // Output: Starting sports car with a roar!

//     delete c1;
//     delete c2;
//     delete c3;

//     return 0;
// }

class BankAccount{
    private:
    float balance;
    string name;
    public:
    BankAccount(float balance,string name){
        this->balance = balance;
        this->name=name;
    }
    int get_balance(){
       return this->balance;
    }
    string get_name(){
        return this->name;
    }
    void set_balance(float amount){
        if(amount<0){
            return;
        }
        this->balance+=amount;
    }
    void set_name(string name){
        if(name==""){
            cout<<"Invalid name!";
            return;
        }
        this->name=name;
    }24_Oct

};

//inheritance 

class SavingAccount:public BankAccount{
    private:
    float interest_rate;
    public:
    SavingAccount(float balance,string name,float interest_rate):BankAccount(balance,name){
        this->interest_rate=interest_rate;
    }
    float get_IR(){
        return this->interest_rate;
    } 
    void set_IR(float ir){
        this->interest_rate=ir;
    }
    void calculate_IR(){
        int interest = (get_balance()*this->interest_rate)/100;
        set_balance(interest);
    }
};
class CurrentAccount:public BankAccount{
    private:
    float over_draft;
    public:
    CurrentAccount(float balance,string name,float over_draft): BankAccount(balance,name){
        this->over_draft=over_draft;
    }

};

int main(){
    SavingAccount a(1000,"sam",12);
    CurrentAccount b(1000,"Sam",100000);
    cout<<a.get_balance()<<endl;
    cout<<a.get_name()<<endl;
    a.set_balance(1000);
    cout<<a.get_balance()<<endl;
    cout<<a.get_name()<<endl;
    a.calculate_IR();
    cout<<a.get_balance()<<endl;
    
}