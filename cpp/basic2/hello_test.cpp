#include <iostream> // 이름을 넣으면 인사를 해주는 프로그램 input name : hong-gil-dong output : Hello hong-gil-dong
using namespace std;

int main ()
{
    char name [100];
    cout << "input : ";
    cin >> name;
    cout << "hello " << name << "\n"; 
    return 0;
}