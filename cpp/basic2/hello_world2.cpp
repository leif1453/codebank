#include <iostream> // 입출력을 보여주는
using namespace std;

int main ()
{
    int width = 0 ;
    cout << "input : " ;
    cin >> width;
    std::cout << "width" << std::endl; // std::은 기본형이나 using namespace std; 쓰면 생략 가능
    return 0;
}