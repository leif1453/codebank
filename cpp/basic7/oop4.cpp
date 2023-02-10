#include <iostream>
using namespace std;

class Animal
{
public: // 멤버 메소드가 먼저
    //Animal(){}; //Default Constructor
    Animal(string name):name_(name){    //초기화 변수, c++ 스타일
        //name_ = name; 동일효과 발생, 자바나 c# 스타일
        cout << "Animal 생성자가 호출되었습니다.";
    }
    //간접접근 Getter
    string Name() const {
        return name_;
    }

    virtual void Speak() const {
        cout << "동물이 말하다." << endl;
    }

private: // 실제로 복사가 가능하지만 가려져서 안 보기이는 형태이므로 복사가 안 된 것과 마찬가지이다.
    string name_;
};

class Dog : public Animal 
{
    public:
        Dog(string name): Animal(name){
            cout << "Dog 클래스 생성자가 호출되었습니다." << endl;
        }
        void Speak() const override{ // override 부모class에서 생성된것을 자식class에 맞춰서 재정의함. 이름은 Speak으로 같지만 cout이 다름.e
            cout << "멍멍~!!!" << endl;
        }
};

int main()
{
    Animal animal("동물");
    cout << animal.Name() << endl;

    Dog bbobbi("뽀삐");
    bbobbi.Speak();
}