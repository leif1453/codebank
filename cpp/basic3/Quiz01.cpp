#include <iostream>

using namespace std;

int main ()
{
    // 1~100까지 합을 구하자.
    int sum = 0;    // 1. 변수를 생각한다.
    for(int i = 1; i <= 100; ++i) {     // 2. 로직을 만든다.
        sum += i;        
        }
    // 3. 입출력을 작성한다.
    cout  << sum << endl;

    return 0;
}