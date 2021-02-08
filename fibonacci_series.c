#include <stdio.h>

int main(int argc, char *argv[])
{
	int nth_terms;

	int terms1 = 0;

	int terms2 = 1;

	int sum = 0;

	int index = 1;

	printf("Please enter the terms of the fibonacci series:\n");

	scanf("%d", &nth_terms);

	while (index <= nth_terms)
	{
		if (index == nth_terms)

			printf("%d\n", sum);

		else
		{
			printf("%d ", sum);

			terms1 = terms2;

			terms2 = sum;
			
			sum = terms1 + terms2;
		}
		
		index++;
	}
	return 0;
}