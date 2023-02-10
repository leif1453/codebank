#include <iostream>
#include <string>
using namespace std;

class Animal {
    public: // 유지보수를 하는 경우 생성자와 멤버 메소드가 먼저 오고 멤버변수는 private로 public만 상속
        Animal(){
            this->name = "동물";
        }

        // Getter(지시자), Setter(입력자)
        void setName(string _name){
            name = _name; // 간접접근의 장점은 암호화,복호화,로그가 들어가는 곳
        }
        
        string getName(){
            return this->name;
        }
        void setAge(int _age){ // c++은 매개변수에 _를 붙임
            age = _age; // main에서 가져와서 instace에 집어넣는 과정
        }
        int getAge(){
            return age; // 멤버의 age
        }

    private:
        int age;
        string name;
};

class Dog : public Animal {

};
int main() {

    Animal ani;
    // cout << ani.name << endl; private에 직접접근은 에러
    cout << ani.getName() << endl; // 간접접근
    ani.setAge(10);
    cout << ani.getAge() << endl;
    ani.setName("동물2");
    cout << ani.getName() << endl;
    
    return 0;
}