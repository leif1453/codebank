#include <iostream> // 1~100까지 정수에서 홀수만 출력하는 프로그램
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++) {
        if(i%2 != 0) // 홀수이면
            cout << i << " ";
    }
    cout <<endl;
    return 0;
}