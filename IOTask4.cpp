#include <iostream>

int main() {

int FHours, FMinutes, FSeconds, SHours, SMinutes, SSeconds;
	std::cin >> FHours >> FMinutes >> FSeconds >> SHours >> SMinutes;
	std::cin >> SSeconds;
	
	auto TimeBetween = 0;
	TimeBetween = SSeconds - FSeconds;
	TimeBetween += (SMinutes - FMinutes) * 60;
	TimeBetween += (SHours - FHours) * 3600;
	std::cout << TimeBetween;
	return 0;
}