#include <iostream> 
#include <cstdlib> // C의 <stdlib.h>
#include <ctime>

int main() { // using namespace std; ChatGPT에서 사용하지 않음.
    std::cout << "가위 바위 보 게임을 시작합니다." << std::endl;
    std::cout << "1: 가위, 2: 바위, 3: 보" << std::endl;
    
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int player;
    std::cout << "숫자를 입력하세요: ";
    std::cin >> player;
    
    if (player == computer) {
        std::cout << "비겼습니다." << std::endl;
    } else if (player == 1 && computer == 2) {
        std::cout << "컴퓨터가 이겼습니다." << std::endl;
    } else if (player == 2 && computer == 3) {
        std::cout << "컴퓨터가 이겼습니다." << std::endl;
    } else if (player == 3 && computer == 1) {
        std::cout << "컴퓨터가 이겼습니다." << std::endl;
    } else {
        std::cout << "당신이 이겼습니다." << std::endl;
    }  
    return 0;
}