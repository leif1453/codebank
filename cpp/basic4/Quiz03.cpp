#include <iostream> // 거스름돈 구하기 
 
using namespace std;
 
int main()
{
    int y;
    cout << "물건 값 : ";
    cin >> y;

    int x = 1000 - y;
    cout << "거스름돈 : " << x << endl;
    
    if (x <= 0)
    {
        cout << "거스름돈 없음" << endl;
        return 0;
    }
         
    int y100 = 0, y50 = 0, y10 = 0; // 변수 많이 써도 괜찮음. 원하는 결과값만 도출하면 된다.
 
    y100 = x / 100; x %= 100;
    y50 = x / 50; x %= 50;
    y10 = x / 10; 
 
    cout << "100원\t: " << y100 << "개" << endl;
    cout << "50원\t: " << y50 << "개" << endl;
    cout << "10원\t: " << y10 << "개" << endl;
    return 0;
}