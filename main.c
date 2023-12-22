#include "main.h"
/**
 *main - Entry point opens a file and factorize the numbers
 *@ac: argument count
 *@av: vector for arguments
 *Return: 0 if successful otherwise 1
 */
int main(int ac, char **av)
{
	FILE *file;
	char buffer[1024];
	int number;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		return (1);
	}
	file = fopen(av[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error openning the file %s\n", av[1]);
		return (1);
	}
	while (fgets(buffer,sizeof(buffer), file) != NULL)
	{
		number = atoi(buffer);
		factorize(number);
	}
	fclose(file);
	return (0);
}
