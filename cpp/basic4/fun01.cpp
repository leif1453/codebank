// Example 1: Display a Text
#include <iostream>
using namespace std;

void greet();  // 함수 헤더 declaring a function
// int a = 100; static 변수 프로그램 실행과 동시에 시작 후 나중에 내려감.

int main() { // 프로그램 시작
    int a = 100;
    greet();     // calling the function, 컴파일러가 ()함수로 인식해서 5번을 찾아감

    return 0;
}
void greet() { // 진행순서 5 8 10 5 14 열리면서 컴퓨터는 main으로 생각
    int a = 3; // 9와 15은 다르다.(지역이 다르기에 출력은 3으로 나오고, 9는 없는 셈이 될 것)
    cout << "Hello there!";
    cout << a << endl;
}