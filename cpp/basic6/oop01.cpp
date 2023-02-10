#include <iostream> // Program to illustrate the working of objects and class in C++ Programming
using namespace std;

class Room { // create a class
    public:  // 멤버 변수
        double length;
        double breadth;
        double height;

    Room(){ // 생성자, 개체의 초기화와 관련. 객체를 만들 때 생성자 먼저 생성
        length = 100;
        breadth = 100;
        height = 200;
    } 

    double calculateArea() { // 멤버메소드
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
}; // 타 언어와 다른 점 class 뒤에 ;

int main() { // 클래스는 시간이 흐르지 않지만(설계만) 이하로는 시간이 흐른다.(동작함) 27에서 4~ 14 로 

    Room myRoom1;     // create object of Room class, 스택에 객체 생성 요즘 언어들과의 다른 특징.
    cout << "obj's breadth = " << myRoom1.breadth << endl;
    cout << "obj's length = " << myRoom1.length << endl;
    cout << "Area of Room =  " << myRoom1.calculateArea() << endl;     // calculate and display the area and volume of the room
    cout << "Volume of Room =  " << myRoom1.calculateVolume() << endl;

    return 0;
}