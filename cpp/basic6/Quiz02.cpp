#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Cal { // 중복이 많이 발생하는 단점이 존재
    public:  
        int plus(int a, int b) {
            return a + b;
        }
        int minus(int a, int b) {
            return a - b;
        }
        int mul(int a, int b) {
            return a * b;
        }
        double div(int a, int b) {
            return (double)a / b;
        }
};

int main() { 
    Cal cal; // 스택 메모리에 존재
    Cal *cal2 = new Cal; // heap 메모리에 존재
    cout << cal.plus(3,5) << endl;
    cout << cal2->minus(7, 2) << endl;
    cout << cal.mul(3, 5) << endl;
    cout << cal.div(10, 2) << endl;

    delete cal2;

    return 0;
}