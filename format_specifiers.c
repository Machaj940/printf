#inclde "holberton.h"
/**
 * print_char - prints character
 * @list: list of arguments
 * Return: amount of chars
 */
int print_char(va_list list)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: amount of chars printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: amount of chars printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * unsigned_integer - prints unsigned ints
 * @list: list of all arguments
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}

/**
 * print_integer - prints an integer
 * @list: list of arguments
 * Return: amount of chars printed
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
