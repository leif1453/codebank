#include <iostream> // 가로 세로(정수) 입력 받아 삼각형의 넓이를 구하는 프로그램을 c++로 구현
using namespace std;

int main(int argc,char* argv[])
{
    int width = 0 ;
    int height = 0 ;
    double area = 0.0 ;
    cout << "width : ";
    cin >> width;
    cout << "height : ";
    cin >> height;
    area = width * height / 2.0;
    std::cout << area << std:: endl;

    return 0;
}