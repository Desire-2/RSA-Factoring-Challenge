#include "factor.h"

/**
 * main - main function
 *
 * Author: Thaoban Abdrasheed
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *_fptr;
	size_t cnt;
	ssize_t _line;
	char *buffer = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	_fptr = fopen(argv[1], "r");
	if (_fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((_line = getline(&buffer, &cnt, _fptr)) != -1)
	{
		factorize(buffer);
	}
return (0);
}
