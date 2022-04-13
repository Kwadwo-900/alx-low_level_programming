#include "main.h"
#include <stdio.h>

/**
 * prints alphabets
 */

int main(void)
{
	void print_alphabet(void)
	{
		char ch;
		
		ch = 'a';

		while(ch <= 'z')
		{
			putchar(ch);
			ch++;
		}

	}
	putchar('\n');
}


