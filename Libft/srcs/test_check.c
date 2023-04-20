#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void check(int c, int(*f)(int))
{
	if(f(c))
		printf(GRN"\nCheck OK [✓]"reset);
	else
		printf(RED"\nCheck KO [X]"reset);
}

void check_comparations(int c)
{
	if(c)
		printf(GRN"\nCheck OK [✓]"reset);
	else
		printf(RED"\nCheck KO [X]"reset);
}