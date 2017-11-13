#include <iostream>

int main() {
	int result = 0;

	int n; 
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int p, v, t;
		std::cin >> p >> v >> t;

		result += (p + v + t >= 2);
	}

	std::cout << result << std::endl;
}