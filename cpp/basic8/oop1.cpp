#include <iostream>
#include <memory> //smart pointer 
using namespace std;

class Car {
public:
    //멤버함수
    Car(){// default 생성자
        this->speed_ = 0; // 강제로 0으로 초기황
    }
    Car(int speed):speed_(speed){
    }
    int Speed(){
        return speed_;
    }
    //멤버변수
private:
        int speed_;
};

int main()
{
    Car myCar(), myCar2(100);     //Stack에 생성
    cout << myCar2.Speed() << endl;

    Car *myCar3 = new Car(200);     //Heap에 생성되고, 인자는 넣을 것인지(11) 아닌지(8) 선택가능
    cout << myCar3->Speed() << endl;
    delete myCar3;

    std::unique_ptr<Car> myCar4 = std::make_unique<Car>(300);     //Heap 생성 C++11 smart_pointer
    cout << myCar4->Speed() << endl;
    // delete myCar4; smart pointer로 인해 delete가 필요하지 않음
    return 0;
}