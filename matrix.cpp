/* From a test I was asked to complete, but I found it on https://open.kattis.com/problems/matrix */
/* During the test I had problems with how the input and output was designed. The sample input shows multiple matrix inputted in one case, but the description says input will be two lines. I could not wrap my head around it, and decided to just let it be. My program then worked, as in it correctly inversed a 2x2 matrix, but it didn't output it correctly. When I returned to this problem I think I have found out how to make it pass.*/
/* I still don't like how the problem and test cases was designed.. */
#include <iostream>
#include <vector>

std::vector<int> matrixInverser(std::vector<int> matrix)
{
	/* Think of input Matrix A as {{a, b},{c, d}} or: */
	/* | a b | */
	/* | c d | */

	/* First calculate the determinant. Determinant of Matrix A will be ad - bc. If I recall correctly, this could be used to check if it's even neccessary to continue - but that's not needed for this problem. */
	int determinant = matrix[0] * matrix[3] - matrix[1] * matrix[2];

	/* Then the inversed matrix will be 1/det A{{d, -b}, {-c, a}} */
	std::vector<int> inversedMatrix;
	inversedMatrix.assign(4, 0);

	inversedMatrix[0] = 1 / determinant * matrix[3];
	inversedMatrix[1] = 1 / determinant * -1 * matrix[1];
	inversedMatrix[2] = 1 / determinant * -1 * matrix[2];
	inversedMatrix[3] = 1 / determinant * matrix[0];

	return inversedMatrix;
}

int main(void)
{
	/* Read from std::cin into variable to get input */
	/* Write to std::cout to send output */

	/* Special shoutout to my math notes from Linear Algebra for this. */
	
	/* I know the matrices will be square and 2x2, so I can hardcode the input reader */

	std::vector<int> matrix, inversedMatrix;
	matrix.assign(4, 0); /* I'll just use a one-dimensional vector to keep it simple. */
	inversedMatrix.assign(4, 0);
	int count = 0;
	/* Loop and check for a matrix until end-of-file */
	while (std::cin >> matrix[0] && std::cin >> matrix[1] && std::cin >> matrix[2] && std::cin >> matrix[3])
	{
		count++;
		inversedMatrix = matrixInverser(matrix);
		std::cout << "Case " << count << ":" << std::endl << inversedMatrix[0] << " " << inversedMatrix[1] << std::endl << inversedMatrix[2] << " " << inversedMatrix[3] << std::endl;
	}
	return 0; /* If exit code is non-zero test fails */
}