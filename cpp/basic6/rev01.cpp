#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
    /*
    string str1; // 문자열 받는 방법
    getline(cin, str1); // 함수 안에 써야함(,문자열 받아줌)
    cout << str1 << endl;
    */
    int num1, num2;
    cin >> num1 >> num2;
    string n = to_string(num1 + num2); // to_string 정수를 문자열로 변환해주는 함수
    cout << n << endl;
    reverse(n.begin(), n.end());
    cout << n << endl;

    return 0;

}