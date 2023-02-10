#include <iostream>
#include <iomanip> 

using namespace std;

int main ()
{
    double pi = 3.14159265359;
    streamsize prec = cout.precision();     // 객체 생성

    cout << setprecision(3) << pi << endl; // 3번째까지 출력

    return 0;
}