#include <iostream>
#include "check_value.h"
#include "random_value.h"
int check_value(int attempts_count) {

    const int target_value = random_value();
    int current_value = 0;
	bool not_win = true;
	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value < target_value) {
            attempts_count++;
			std::cout << "less than " << current_value << std::endl;

		}
		else if (current_value > target_value) {
            attempts_count++;
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
            std::cout << "you win!";
			break;
		}

	} while(true);
    std::cout << " attemps = " << attempts_count << std::endl;
    return attempts_count;
}
