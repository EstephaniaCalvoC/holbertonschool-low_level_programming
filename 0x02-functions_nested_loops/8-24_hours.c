#include "holberton.h"

/**
 * jack_bauer - Print every minute of the day.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = '0'; h1 < '3'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			if (!(h1 == '2' && h2 >= '4'))
			{
				for (m1 = '0'; m1 < '6'; m1++)
				{
					for (m2 = '0'; m2 <= '9'; m2++)
					{
						_putchar(h1);
						_putchar(h2);
						_putchar(':');
						_putchar(m1);
						_putchar(m2);
						_putchar('\n');
					}
				}
			}
		}
	}
}
