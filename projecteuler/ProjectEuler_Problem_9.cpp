#include <iostream>
using namespace std;

int* pointer;
int info[3]; // 0:=>a, 1:=>b, 2:=>c
int sum = 0;

int* Answer_Linear();

int main()
{
	cout << Answer_Linear() << endl;
	
	return 0;
}

int* Answer_Linear()
{	
	/*	
	 *	If m and n are both zero, then a+b+c != 1000.	 
	 */
	int m, n;
	 
	for (m = 1;  m <= 500; m++)
	{
			for (n = 1; n <= 500; n++)
			{
				info = { 2*m*n, m*m - n*n, m*m + n*n } //This is the formula for rational Pythagorean triplets.
				sum = info[0] + info[1] + info[2]; //I could've done a for loop... but 3 nested loops? :-/
				
				if (sum == 1000)
				{
					break;
				}
				else
				{
					continue;
				}
			}
			
			if (sum == 1000) 
			{
				break;
			}
	}
	
	pointer = info;
	return pointer;
}