#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int a;  std::cin >> a;
	std::string b;  std::cin >> b;

	const int anton = std::count(b.begin(), b.end(), 'A');
	const int danik = std::count(b.begin(), b.end(), 'D');
	const int result = anton - danik;

	if (result > 0) {
		std::cout << "Anton";
	} else if (result < 0) {
		std::cout << "Danik";
	} else std::cout << "Friendship";
}