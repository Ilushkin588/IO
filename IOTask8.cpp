#include <iostream>

int main(){
	int Sum = 1, N = -1;
		while(N != 0){
			Sum += N;
			std::cin >> N;
		}
		std::cout << Sum;
return 0;
}