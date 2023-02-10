#include <iostream>
using namespace std;

int main() {
    //입력받은 char 문자 부터 'Z'까지 출력하는 프로그램을 작성해 주세요.
    char ch; // 1. 변수 생성

    cout << " ";
    cin >> ch ;
    
    for(ch; ch <= 'z'; ch++){ // 2. 로직 작성 z로 함으로써 대문자까지 포함. Z였으면 뒤 숫자에 해당하는 소문자 영단어는 나오지 않는다.
        cout << ch << " ";
    }

    cout << endl; // 3. 입출력
    return 0;
}