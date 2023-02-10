#include <iostream>
using namespace std;
void swap(int* x, int* y);
int main(void)
{
    int x = 0, y = 0;
    cout << "두 정수를 입력 받은 후, swap하여 출력합니다. : ";
    cin >> x >> y;

    swap(&x,&y);
    cout << x << " " << y << endl;
    return 0;
}

void swap(int* x, int* y)
{
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}