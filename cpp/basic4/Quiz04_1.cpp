#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

random_device rng;

uniform_int_distribution<int> dist1(-30, 30);

int main()
{
    for(size_t i = 0; i != 20; ++i)    // [-30, 30] 범위의 정수 20개 생성 및 출력
    {
    cout << dist1(rng) << " ";
    }

    int *arr = new int[dist1(rng)];
    for(int k = 0; k < dist1(rng); k++){
        cin >>arr[k];
    }
    
    for(int k = 0; k < dist1(rng); k++){
        for(int j = 0; j < dist1(rng)-k; j++){
            if(arr[j] > arr[j+1]){
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    cout << "1 + 2 : " << arr[19] + arr[20] << endl;
    cout << "R1 : " << arr[20] << " // " << "R2 : " << arr[19] << endl;
    delete(arr);
    return 0;
}

// 참조 랜덤 함수 범위 지정 https://bf-quail.tistory.com/4