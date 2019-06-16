/* From https://open.kattis.com/problems/aaah */

#include <iostream>

int main(void)
{
	/* Read from std::cin into variable to get input */
	/* Write to std::cout to send output */

	std::string said, needed;
	std::cin >> said >> needed;

	if (said.length() >= needed.length())
	{
		std::cout << "go";
	}
	else
	{
		std::cout << "no";
	}
	return 0; /* If exit code is non-zero test fails */
}