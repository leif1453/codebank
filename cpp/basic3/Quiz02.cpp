#include <iostream>

using namespace std;

int main() // 100이하의 정수 중 3과 7의 배수만 출력해주세요.
{
    for(int i=1; i<=100; i++){  // 2. 로직을 만든다.
        if(i%3 == 0 || i%7 == 0) // 1. 변수를 생각한다.
        cout << i << " ";
    }
    cout << endl; // 3. 입출력을 작성한다.

    return 0;
}