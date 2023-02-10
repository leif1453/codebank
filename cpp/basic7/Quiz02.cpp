#include <iostream>
#include <string>
using namespace std;

class Cat
{
    public: // 디폴트까지 있으면 생성자 2개. 생성자가 많을 경우, 받을 값이 많다는 뜻 
        // Cat(){} 디폴트 생성자
        Cat(string name, string color):name_(name), color_(color){}   

    string Name() const { // Getter get을 쓰지 않고 대문자로 표기
        return name_;
    }
    string Color() const {
        return color_;
    }
    virtual void Speak() const {
        cout << "동물이 말하다." << endl;
    }
    // virtual void Speak() = 0;
private: 
    string name_;
    string color_;
};

class Persian : public Cat 
{
    public:
        Persian(string name, string color): Cat(name,color){}
    void Speak() const override{ 
    cout << "야옹~!!!" << endl;
    }
};

class Dog
{
    public: 
        Dog(string name, string color):name_(name), color_(color){}   

    string Name() const {
        return name_;
    }
    string Color() const {
        return color_;
    }
    // virtual void Speak() const {
    //     cout << "동물이 말하다." << endl;
    // }
    virtual string Speak() = 0; // 순수 가상함수

private: 
    string name_;
    string color_;
};

class Bulldog : public Dog 
{
    public:
        Bulldog(string name, string color):Dog(name, color){}
         // void Speak() const override 
        string Speak() override {
            return "멍멍~~!";
        }    
};

int main()
{
    Persian kitty("키티", "하얀색"), bbomi("뽀미", "회색"); // stack에 만든 경우
    cout << kitty.Name() << " " << kitty.Color() << endl; // c++ -> 이 아닌 .을 찍는다.
    cout << bbomi.Name() << " " << bbomi.Color() << endl;
    Bulldog tomy("토미", "검은색"), kaltok("칼톡", "회백색");
    cout << tomy.Name() << " " << tomy.Color() << endl;
    cout << kaltok.Name() << " " << kaltok.Color() << endl;
}