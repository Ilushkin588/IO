#include <iostream>
int main(){
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a >= b && b >= c ){
		std::cout << c << " " << b << " " << a;
	} else if (a >= c && c >= b){
		std::cout << b << " " << c << " " << a;
	} else if (b >= a && a >= c){
		std::cout << c << " " << a << " " << b;
	} else if (c >= a && a >= b){
		std::cout << b << " " << a << " " << c;
	} else if (b >= c && c >= a){
		std::cout << a << " " << c << " " << b;
	} else {
		std::cout << a << " " << b << " " << c;
	}
	return 0;

}
// Пока решил оставить предыдущее решение.
// Решение снизу не проходит тест или 3 1 3 или 1 2 1 
// #include <iostream>
// int main(){
// 	int a = 0, b = 0, c = 0;
// 	std::cin >> a >> b >> c;

// 	auto lower1 = 0, bigger1 = 0;
// 	auto lower2 = 0, bigger2 = 0;
// 	if (a >= b){
// 		lower1 = b;
// 		bigger1 = a;
// 	} else {
// 		lower1 = a;
// 		bigger1 = b;
// 	}
// 	if (b >= c){
// 		lower2 = c;
// 		bigger2 = b;
// 	} else {
// 		lower2 = b;
// 		bigger2 = c;
// 	}
// 	if (bigger1 >= bigger2){
// 		if (lower1 >= lower2){
// 			std::cout << lower2 << " " << lower1 << " " << bigger1;
// 		} else{
// 			std::cout << lower1 << " " << lower2 << " " << bigger1;
// 		}
// 	} else {
// 		std::cout << lower1 << " " << bigger1 << " " << bigger2;
// 	}
// 	return 0;

// }