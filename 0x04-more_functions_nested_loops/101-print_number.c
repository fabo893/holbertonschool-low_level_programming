#include "holberton.h"

/**
  * print_helper - print the number given
  * @n: number
  */
void print_helper(int n)
{
        int idx, num, ls[18];

        if (n == INT_MIN)
        {
                _putchar(50);
                _putchar(49);
                _putchar(52);
                _putchar(55);
                _putchar(52);
                _putchar(56);
                _putchar(51);
                _putchar(54);
                _putchar(52);
                _putchar(56);
        }
        else
        {
                for (idx = 0; n != 0; idx++)
                {
                        num = n % 10;
                        ls[idx] = num;
                        n = n / 10;
                }

                idx--;
                for (; idx >= 0; idx--)
                {
                        _putchar(ls[idx] + '0');
                }
        }
}


/**
  * print_number - call the helper for print the number.
  * @n: the number
  */
void print_number(int n)
{
        if (n == 0)
                _putchar('0');

        if (n < 0)
        {
                _putchar(45);
                n = (n * -1);
        }

        print_helper(n);

}

