/*
 * This C++ answer is not complete!  Unfortunately, I am not yet good enough with C++ to complete this problem.
 * I still need to learn more about strings and vectors before I can provide the answer.
 *
 *
 * However, to prove that I still am able to solve this problem, 
 * I wrote the actual answer in Ruby (because I'm better with that language)
 *
 */
#include <iostream>
#include <fstream>
using namespace std;

vector<string> vect;
char wordList;
unsigned long int Answer;

unsigned float triangle(int n);
bool getFileInformation();
unsigned long int convertLetterToNumber();

int main()
{
	getFileInformation();
	
	return Answer;
}

unsigned float triangle(int n)
{
	return 0.5*n*(n+1);
}

void getFileInformation()
{
	getFileInformation();
	ifstream file;
	file.open("words.txt");
	if (file.is_open())
	{
		for (int i = 0; !(file.eof()); i++) 
		{
			vect.push_back(file.getline("words.txt",256,","));
		}
		
	}
	else
	{
		cout << "Unable to open file." << endl;
	}
	
	f.close();
}