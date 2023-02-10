#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    Car() {
        this->brand = "벤츠";
    }
    void run() {
        cout << " 차가 달리다" << endl;
    }
};

class SuperCar : public Car {
};
int main() {
    SuperCar super;
    cout << super.brand;
    super.run();
    
    return 0;
}