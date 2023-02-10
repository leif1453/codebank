#include <iostream>

using namespace std;

int add(int a, int b) {
    return (a + b);
}
int minuss(int a, int b) {
    return (a - b);
}
int multiple(int a, int b) {
    return (a * b);
}
double divide(int a, int b) {
    return ((double)a / b);
}

int main() {

    int sum;
    int min;
	int mul;
	double div;
    sum = add(100, 78);
    min = minuss(100, 78);
    mul = multiple(100, 78);
    div = divide(100, 78);

    cout << "100 + 78 = " << sum << endl;
    cout << "100 - 78 = " << min << endl;
    cout << "100 * 78 = " << mul << endl;
    cout << "100 / 78 = " << div << endl;

    return 0;
}