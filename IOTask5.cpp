#include <iostream>

int main () {
	int a = 0, b = 0;
	std::cin >> a >> b;
	if (a > b){
		std::cout << 1;
	} else if (a == b){
		std::cout << 0;
	} else {
		std::cout << 2;
	}
	return 0;
}