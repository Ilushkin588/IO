#include <iostream>
int main() {
	int N, number = 0, amount = 1, amount1 = 0;
	std::cin >> N;
	number = N;
	while (N != 0) {
		std::cin >> N;
		if (N == number) {
			amount++;
		}
		else {
			number = N;
			amount = 1;
		}
		if (amount > amount1) 
				amount1 = amount;
	}
		std::cout << amount1;
	
	return 0;
}