#include <iostream>
#include <string>
#include "check_value.h"
#include "high_scores.h"


int main() {

    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::string user_name;
    std::cin >> user_name;
    int attempts_count = check_value(1);
    high_scores(attempts_count, user_name);

}
