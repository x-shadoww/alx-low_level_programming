#include holberton.h
/* print_alphabet - prints alphabets in lowercase followed by a new line */
void print_alphabet(void)
{
	char letter;
	
	for(letter = 'a'; letter <= 'z'; letter++);
	_putchar(letter);
		
	_putchar('\n');

}
