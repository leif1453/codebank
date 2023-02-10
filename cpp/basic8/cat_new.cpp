#include <iostream> // Quiz02 main 변경
#include <memory> //smart pointer 사용 시 
using namespace std;

class Cat
{
    public:
        Cat() { }
        Cat(string name) { }
        Cat(string name, string color):name_(name), color_(color){}
        string Name(){ //Getter ~ 16
            return name_;
        }
        string Color(){
            return color_;
        }
        virtual string Speak() {}; //virtual
    private:
        string name_;
        string color_;

};
class Persian : public Cat
{
    public:
        Persian(string name, string color):Cat(name, color){}
        string Speak() override {
            return "야옹~~!";
        }
    private:
};

class Dog
{
    public:
        Dog() { }
        Dog(string name) { }
        Dog(string name, string color):name_(name), color_(color){}
        string Name(){ //Getter ~ 44
            return name_;
        }
        string Color(){
            return color_;
        }
        virtual string Speak() {}; //virtual
    private:
        string name_;
        string color_;

};
class Bulldog : public Dog
{
    public:
        Bulldog(string name, string color):Dog(name, color){}
        string Speak() override {
            return "멍멍~~!";
        }
    private:
};

int main()
{
    Persian kitti("키티", "하얀색"); //Stack에 객체생성
    cout << kitti.Name() << ":" << kitti.Color() << ":" << kitti.Speak() << endl; //stack은 .을 찍어 주소값을 본다.
    Persian *bbomi = new Persian("뽀미", "회색"); // Heap에 객체생성. c++은 new를 쓰면 ->로 사용
    cout << bbomi->Name() << ":" <<bbomi->Color() << endl;
    delete bbomi;
    //Heap에 객체생성, smart pointer(c11에서 새로운 문법)를 이용하여 자동 메모리 해제(dlete가 없어도 됨), 메모리 누수방지
    std::unique_ptr<Persian> tom = std::make_unique<Persian>("톰", "노란색"); // <타입>
    cout << tom->Name() << ":" << tom->Color() << endl; 

    Bulldog tomy("토미", "검은색");
    cout << tomy.Name() << ":" << tomy.Color() << ":" << tomy.Speak() << endl; 
    Bulldog *kaltok = new Bulldog("칼톡", "회백색"); 
    cout << kaltok->Name() << ":" <<kaltok->Color() << endl;
    unique_ptr<Bulldog> jindo = make_unique<Bulldog>("진도", "흰색"); // <타입>
    cout << jindo->Name() << ":" << jindo->Color() << endl; 
    delete kaltok;

    return 0;
}