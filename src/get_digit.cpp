#include "../include/get_digit.h"

std::string get_digit(std::string str) {
    std::string result = "";
	for (char elem : str) {
		if (isdigit(elem)) {
			result.push_back(elem);
		}
	}
	return result;
}