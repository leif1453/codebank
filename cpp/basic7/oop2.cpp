#include <iostream> 
using namespace std;

class Shape { // 상속은 강 연결성이기에 자주 쓰면 좋지 않음(복잡도와 수정 어령움이 증가). IS-a("사자는 포유류다.") has-a(코어는 상속하되, 나머지는 부품처럼. 느근한 연결)
public:// public은 상속이 가능 / private는 상속이 불가
    string color;// 상속에 관한 것
    Shape(){
        this ->color = "노란색"; // 기본색은 노란색
    }
    string Draw() {
        return "도형을 그리다.";
    }

}; 

class Circle : public Shape{  // 상속 Shape을 그대로 가져옴.5~14에 해당하는 부분을  15 한 줄로 복사
};

class Rectanle : public Shape{ 
};

int main() { 
    Shape s; // stack에 생성
    cout << s.color << endl;
    Circle circle;
    cout << circle.color << endl;
    cout << circle.Draw() << endl;
    Rectanle rect;
    cout << rect.color << endl;
    cout << rect.Draw() << endl;

    return 0;
}