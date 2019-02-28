**0x08. C - Static libraries**

Project about:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

**TASK 0**
Create the static library libholberton.a containing all the functions listed below:int _putchar(char c);
* int _islower(int c);
* int _isalpha(int c);
* int _abs(int n);
* int _isupper(int c);
* int _isdigit(int c);
* int _strlen(char *s);
* void _puts(char *s);
* char *_strcpy(char *dest, char *src);
* int _atoi(char *s);
* char *_strcat(char *dest, char *src);
* char *_strncat(char *dest, char *src, int n);
* char *_strncpy(char *dest, char *src, int n);
* int _strcmp(char *s1, char *s2);
* char *_memset(char *s, char b, unsigned int n);
* char *_memcpy(char *dest, char *src, unsigned int n);
* char *_strchr(char *s, char c);
* unsigned int _strspn(char *s, char *accept);
* char *_strpbrk(char *s, char *accept);
* char *_strstr(char *haystack, char *needle);

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your holberton.h file to your repository. It should at least contain all the prototypes of the above functions.

**TASK 1**
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

**TASK 2**
Write a blog post on C static libraries. It should cover:
* Why use libraries
* How they work
* How to create them
* How to use them
Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on Twitter and LinkedIn.

When done, please add all urls below (blog post, tweet, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings