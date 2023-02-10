#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int rev(int a) { // 입력 형식 : 두 수의 범위는 100000000 을 넘지않는 자연수이다.(정수형으로 작성해라) 이 부분을 걱정하는 것은 문제의 포인트는 아님. 
	string s = to_string(a);
	reverse(s.begin(), s.end()); // 2번에 포함된 함수
	return atoi(s.c_str());
}

int rev2(int b) {
	string s = to_string(b);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main() {
	int a;
	int b;
	int n = a + b;
	cin >> a >> b;
	cout << rev(rev(a) + rev2(b)) << endl;
}
// 참고 사이트 https://doodle-ns.tistory.com/17