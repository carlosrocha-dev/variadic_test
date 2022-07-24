#include <stdio.h>
#include <stdarg.h>

void formated_print(int num, ...)
{
	int i = 0 ;
	va_list args;

	va_start(args, num);
	while(i <= num)
	{
		int value =  va_arg(args, int);
		printf("%d: %d\n", i, value);
		i++;
	}
	va_end(args);
}


int	main()
{
	formated_print(3, 4 ,33, 42, 54);
}