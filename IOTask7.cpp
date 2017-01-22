#include <iostream>

int main(){
	int N, DegreeNumber = 1;
	std::cin >> N;
	while (DegreeNumber <= N){
		std::cout << DegreeNumber << " ";
		DegreeNumber *= 2; 
	}

return 0;
}