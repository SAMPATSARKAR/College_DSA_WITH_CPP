// #include <iostream>
// using namespace std;
// class Car {
// private:
//     int speed;
// public:
//     Car(int s) { 
//         speed = s;
//     }
//     int getSpeed(){
//         return speed;
//      }
//     friend class Bus;  // ✅ Bus can now access private data
// };

// class Bus {
// public:
//     void showSpeed(Car c) {
//         cout << c.speed;  // ✅ Allowed, because Bus is a friend
//     }
// };
// int main(){
//     Car b(100);
//     // b.speed = 100;
//     // showSpeed(Car b);
//     cout<<b.getSpeed()<<endl;

// }
// ---------------------------------------
// #include <iostream>
// using namespace std;
// class Car {
// private:
//     int speed;
//     int dis;
// public:
//     int Gettter(){
//         return speed;
//     }
// // parameterized constructor
// Car(int s,int d) { 
//     speed = s; 
//     dis = d; 
// }   
// // copy constructor
// Car(Car &c) { 
//     speed = c.speed;
//     dis = c.dis;
// }
// };          

// int main() {
//     Car c1(120,4);     // new object with speed = 120
//     // c1.move(5);      // dis = 600

//     Car c2 = c1;     // copy constructor called
//     cout << c2.<<endl;  // d, because copy constructor reset dis
// }
