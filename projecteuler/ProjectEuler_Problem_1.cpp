#include <iostream>

int Answer();

int main()
{
	int a = Answer();

	return a;
}

int Answer()
{
	int answer = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			answer += i;
		}
	}



	return answer;
}