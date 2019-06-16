/* From a test I was asked to complete, meaning no open.kattis link */

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	/* Read from std::cin into variable to get input */
	/* Write to std::cout to send output */

	/* Formula for area of a circle is Pi* radius* radius* /
	
	/* r is radius of pizza, c is outer edge crust in cm */
	int pizzaRadius, crustLength;
	std::cin >> pizzaRadius >> crustLength;

	/* Calculate the area of the whole pizza. */
	float pizzaArea = M_PI * pizzaRadius * pizzaRadius;

	/* Calculate the area of the cheesy part by removing the crust length from radius. */
	int cheeseRadius = pizzaRadius - crustLength;
	float cheeseArea = M_PI * cheeseRadius * cheeseRadius;

	float percentage = (cheeseArea / pizzaArea) * 100; /* Times 100 as answer wants percentage. */
	
	/* First send out std::fixed and then std::setprecision(6) so that cout has the correct precision (trailing zeroes). I got stuck because I didn't understand that std::fixed was also needed. I should have read the reference more carefully.. */
	std::cout << std::fixed << std::setprecision(6) << percentage;

	return 0; /* If exit code is non-zero test fails */
}