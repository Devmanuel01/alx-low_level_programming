This Directory deals with all things Recursion in C programming language.

Recursion in C Language is a concept where a Function can call itself in the same Function.

Example:
int print_number(n)
{
	if (n < 0)
		return ;
	print_number(n - 1);
}

NOTE:
- All files are compiled on Ubuntu 20.04 LTS using gcc.
- All code files conform with the Betty Style.
- No C language standard Library was used.
- All function prototypes are in the main.h file.
- No Loops were used.
