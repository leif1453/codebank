#include <iostream> 
using namespace std;

class Car { // create a class
    public:  // 지시자
        int speed; // 1. 멤버 변수
        string brand;
        string color;

    Car(){ // 2. 생성자(디폴트 생성자 생략가능)
    }
    Car(int _speed){
        speed = _speed; // 구분하기위해 _붙임, c++ 스타일
    }
    Car(string brand){
        this->brand = brand; // 자바 스타일
    } 
    Car(string _brand, int _speed, string _color){
        brand = _brand;
        speed = _speed;
        color = _color;
    } 
}; 

int main() { 
    Car MyCar; // stack에 생생, 디폴트 생성자를 통해 생성
    Car *MyCar2 = new Car(); // heap에 객체 생성, 첫 번째 생성자로 객체생성
    Car *MyCar3 = new Car(180); // heap에 생성, 2 번째 생성자로 객체생성
    Car *MyCar4 = new Car("현대"); // heap에 생성, 3 번째 생성자로 객체생성
    Car *MyCar5 = new Car("기아", 240, "빨간색"); // heap에 생성, 3 번째 생성자로 객체생성 객체가 만들어질 때부터 정해져있음.

    cout << "Mycar : " << MyCar.speed << endl;
    cout << "Mycar2 : " << MyCar2->speed << endl; // stack은 . / heap은 -> 으로 표시
    cout << "Mycar3 : " << MyCar3->speed << endl;
    cout << "Mycar4 : " << MyCar4->brand << endl;
    cout << "Mycar5 : " << MyCar5->brand << " : " << MyCar5->speed << " : " << MyCar5->color << endl; // 객체가 만들어질 때부터 정해져있음.

    delete MyCar2; // *은 지워줘야함.
    delete MyCar3;
    delete MyCar4;
    delete MyCar5;

    return 0;
}