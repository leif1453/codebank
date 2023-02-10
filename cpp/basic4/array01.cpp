#include <iostream>
using namespace std;

int main()
{    
    int arr[3] = {1, 2, 3}; // 선언과 동시에 초기화 
    for(int i = 0; i < 3; i++) {
     cout << arr[i] << endl;
    }

    //동적할당
    int *arr2 = new int [3]; // 선언이 중요. arr2에 주소가 들어가서 heap에 만들어짐(arr2는 포인터만), 객체 지향은 new, 포인터는 길이가 같다.(운영체제 비트 수와 관련)
    for(int i = 0; i < 3; i++) {
        arr2[i] = i + 1; // 초기화 값
        cout << arr2[i] << endl;
    }

    delete[] arr2; // stack이 지워진 후 heap도 지워져야 함, 배열(13= new int [3];)은 배열 형태로 지운다.
    
    return 0;
}