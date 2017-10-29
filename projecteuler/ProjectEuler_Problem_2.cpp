#include <iostream>
using namespace std;

unsigned long int fibonacci(int input); //the seed denotes the position in the Fibonacci sequence

unsigned long int main()
{
	unsigned long int answer = 0;
	
	for (int i = 0; fibonacci(i) <= 4000000; i++)
	{
		if ( fibonacci(i) % 2 == 0 )
		{
			answer += a;
		}
	}

	return answer;
}

unsigned long int fibonacci(int input)
{
	if (input == 0 || input == 1)
	{
		return 1;
	}
	else
	{
		unsigned long int output = fibonacci(input - 1) + fibonacci(input - 2);
		return output;
	}
}