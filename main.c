#include <stdlib.h>
#include <stdio.h>

void fizzbuzz(FILE *fout, unsigned int n)
{
	unsigned int i;
	for (i = 1 ; i <= n ; i++)
	{
		if (i % 15 == 0)
			fputs("FizzBuzz", fout);
		else if (i % 3 == 0)
			fputs("Fizz", fout);
		else if (i % 5 == 0)
			fputs("Buzz", fout);
		else
			fprintf(fout, "%u", i);
			
		fputc(i == n ? '\n' : ' ', fout);
	}
}

void interpreter(FILE *f)
{
	unsigned int n;

	while (fscanf(f, "FizzBuzz %u%*c", &n) == 1)
	{
		fizzbuzz(stdout, n);
	}
}

int main(int argc, char *argv[])
{
	FILE *f;

	if (argc == 1)
	{
		interpreter(stdin);
		return 0;
	}
	
	while (--argc > 0)
	{
		if ((f = fopen(argv[argc], "r")) != NULL)
		{
			interpreter(f);
		}
		else
		{
			fprintf(stderr, "Error: Failed to open file '%s'\n", argv[argc]);
		}
	}
	
	return 0;
}