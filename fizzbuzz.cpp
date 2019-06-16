/* From https://open.kattis.com/problems/fizzbuzz */

#include <iostream>
#include <vector>

int main(void)
{
	/* Read from std::cin into variable to get input */
	/* Write to std::cout to send output */

	int x, y, n;
	std::cin >> x >> y >> n;
	for (int i = 1; i <= n; i++)
	{
		bool changed = false;
		if (i % x == 0)
		{
			/* Divisible by X */
			std::cout << "Fizz";
			changed = true;
		}
		if (i % y == 0)
		{
			/* Divisible by Y */
			std::cout << "Buzz";
			changed = true;
		}
		if (!changed) {
			std::cout << i;
		}
		std::cout << "\n";
	}

	return 0; /* If exit code is non-zero test fails */
}