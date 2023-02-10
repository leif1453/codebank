#include <iostream> 
#include <cstdlib> // C의 <stdlib.h>
#include <ctime>

// using namespace std; ChatGPT에서 사용하지 않음.

int main() {
  std::cout << "주사위 게임을 시작합니다." << std::endl;
    
  srand(time(NULL));
  int computer = rand() % 6 + 1;
  int player = rand() % 6 + 1;
/*  std::cout << "숫자를 입력하세요: ";
  std::cin >> player;
*/  
  if (player == computer) {
    std::cout << "비겼습니다." << std::endl;
  } else if (player == 1 && computer == 2) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 1 && computer == 3) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 1 && computer == 4) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 1 && computer == 5) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 1 && computer == 6) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 2 && computer == 3) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 2 && computer == 4) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 2 && computer == 5) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 2 && computer == 6) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 3 && computer == 4) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 3 && computer == 5) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 3 && computer == 6) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 4 && computer == 5) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 4 && computer == 6) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else if (player == 5 && computer == 6) {
    std::cout << "컴퓨터가 이겼습니다." << std::endl;
  } else {
    std::cout << "당신이 이겼습니다." << std::endl;
  }  
  return 0;
}