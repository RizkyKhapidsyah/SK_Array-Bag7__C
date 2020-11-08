#include <stdio.h>
#include <conio.h>

int main()
{
	char hello[] = "Halo, Manusia-Manusia!\n";
	int n;

	n = 0;
	while (putchar(hello[n++]))	/* ugly, huh? But it works! */
		;							/* This is common in C when an
									  empty statement belongs to
									  a loop or `if` decision. It
									  shows that the empty statement
									  is intentional.
									 */

	_getch();
	return(0);
}