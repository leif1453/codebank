#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Cat
{
    public: 
        string  name;
        int     age;
    Cat()    //default Constructor 기본 생성자(객체의 초기화 담당)

    {   //객체의 초기화를 담당!!
        name = "야옹이"; // this 클래스가 객체가 되었을 때를 나타낸다.
        age = 0;
    }
    //멤버 메소드
    void Meow1() { // 멤버 메소드가 위에 올라와 있는 것은 한국 스타일
        cout << "야옹~~!!" << endl;
    }
    string Meow2() {
        return "야옹옹~~~~!!!!";
    }
};

int main() {
   Cat tom; // 다른 언어에서는 비어있다고 인식
   cout << "톰의 나이 : " << tom.age << endl;
   cout << "톰의 이름 : " << tom.name << endl;
   tom.Meow1();
   cout << tom.Meow2() << endl;

  return 0;
}