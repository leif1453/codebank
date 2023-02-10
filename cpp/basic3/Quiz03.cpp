#include <iostream>
#include <iomanip> 

using namespace std;

int main()     // 섭씨 온도를 화씨 온도로 변환하는 프로그램을 작성하세요.
{
    int Cel = 0; 	// 1. 변수 생각
    double Fah = 0;
    streamsize prec = cout.precision();

    cout << "°C : ";
    cin >> Cel;

    Fah =  9.0 / 5.0 * Cel + 32;     // 2. 로직 생각 화씨 온도 = 9 / 5 * 섭씨온도 + 32 
    
    cout << setprecision(4) << "°F : " << Fah << endl; 	// 3. 입출력 생각
    
    return 0;
}