0x04. C - Pointers, arrays and strings

Learning all about pointers, arrays, and strings

**TASK 0**
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
* Prototype: void reset_to_98(int *n);

**TASK 1**
Write a function that swaps the values of two integers.
* Prototype: void swap_int(int *a, int *b);

**TASK 2**
Write a function that returns the length of a string.
* Prototype: int _strlen(char *s);
* FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

**TASK 3**
Write a function that prints a string, followed by a new line, to stdout.
* Prototype: void _puts(char *str);
* FYI: The standard library provides a similar function: puts. Run man puts to learn more.

**TASK 4**
Write a function that prints a string, in reverse, followed by a new line.
* Prototype: void print_rev(char *s);

**TASK 5**
Write a function that reverses a string.
* Prototype: void rev_string(char *s);

**TASK 6**
Write a function that prints one char out of 2 of a string, followed by a new line.
* Prototype: void puts2(char *str);
* The function should print only one character out of two, starting with the first one

**TASK 7**
Write a function that prints half of a string, followed by a new line.
* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

**TASK 8**
Write a function that prints n elements of an array of integers, followed by a new line.
* Prototype: void print_array(int *a, int n);
* where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use printf

**TASK 9**
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* Prototype: char *_strcpy(char *dest, char *src);
* Return value: the pointer to dest
* FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.