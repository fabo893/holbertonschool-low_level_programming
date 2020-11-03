#include <stdio.h>

/**
 * main - print all possible combinations
 * Return: On success, always 0
 */
<<<<<<< HEAD
int main(void)
{
	int i, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				if (i != x && x != y && i < x && x < y)
				{
					putchar(i + '0');
					putchar(x + '0');
					putchar(y + '0');
					if (i != 7 || x != 8 || y != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
=======
int main(void) {

  int i, x, y;

  for (i = 0; i <= 9; i++)
    {
      for (x = 0; x <= 9; x++)
	{
	  for (y = 0; y <= 9; y++)
	    {
	      if (i != x && x != y && y != i && i < x && x < y)
		{
		  putchar(i + '0');
		  putchar(x + '0');
		  putchar(y + '0');
		  if (i != 7 || x != 8 || y != 9)
		    {
		      putchar(',');
		      putchar(' ');
		    }
		}
	    }
	}
    }
  putchar('\n');
  return 0;
>>>>>>> ff946957170de227274334ec61e624618da5a266
}
