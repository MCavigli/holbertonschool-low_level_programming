# 0x1C. C - Makefiles

**Repo:** `holbertonschool-low_level_programming`
**Directory:** `0x1C-makefiles`

## Resources

* [Makefile google search](https://www.google.com/search?q=makefile)
* [Intro to Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html)
* [Makefile wikipedia](https://en.wikipedia.org/wiki/Makefile)
* [Simple Makefile tutorial](http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
* [What is a Makefile?](https://opensource.com/article/18/8/what-how-makefile)
* [Makefile cheatsheet](https://devhints.io/makefile)
* [patsubst stackoverflow page](https://stackoverflow.com/questions/28559338/makefile-to-convert-all-c-to-o)

## Requirements

* Version of `make`: GNU Make 3.81
* All your files should end with a new line

## More Info

### Files

In the following tasks, we are going to use [these files](https://github.com/holbertonschool/0x1B.c). We want to compile these only.

## TASKS

### Task 0

Create your first Makefile.

Requirements:

* name of the executable: holberton
* rules: all
  * The all rule builds your executable
* variables: none

```
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$ ./holberton 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
\"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$
```
File: `0-Makefile`

### Task 1

Requirements:

* name of the executable: holberton
* rules: all
  * The all rule builds your executable
* variables: CC, SRC
  * CC: the compiler to be used
  * SRC: the .c files

```
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$
```

File: `1-Makefile`

### Task 2

Create your first useful Makefile.

Requirements:

* name of the executable: holberton
* rules: all
  * The all rule builds your executable
* variables: CC, SRC, OBJ, NAME
  * CC: the compiler to be used
  * SRC: the .c files
  * OBJ: the .o files
  * NAME: the name of the executable
* The all rule should recompile only the updated source files
* You are not allowed to have a list of all the .o files

```
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ echo "/* Holberton */" >> main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$
```

File: `2-Makefile`

### Task 3

Requirements:

* name of the executable: holberton
* rules: all, clean, oclean, fclean, re
  * all: builds your executable
  * clean: deletes all Emacs and Vim temporary files along with the executable
  * oclean: deletes the object files
  * fclean: deletes the Emacs temporary files, the executable, and the object files
  * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM
  * CC: the compiler to be used
  * SRC: the .c files
  * OBJ: the .o files
  * NAME: the name of the executable
  * RM: the program to delete files
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail
* You are not allowed to have a list of all the .o files

```
julien@ubuntu:~/holberton/curriculum_by_julien/holbertonschool-low_level_programming/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton
holberton.c
holberton.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
rm -f *~ holberton
julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o holberton.o
julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ holberton
rm -f main.o holberton.o
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
rm -f main.o holberton.o
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$
```

File: `3-Makefile`

### Task 4

Requirements:

* name of the executable: holberton
* rules: all, clean, fclean, oclean, re
  * all: builds your executable
  * clean: deletes all Emacs and Vim temporary files along with the executable
  * oclean: deletes the object files
  * fclean: deletes the Emacs temporary files, the executable, and the object files
  * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM, CFLAGS
  * CC: the compiler to be used
  * SRC: the .c files
  * OBJ: the .o files
  * NAME: the name of the executable
  * RM: the program to delete files
  * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail

* You are not allowed to have a list of all the .o files

```
julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
julien@ubuntu:~/0x1C. Makefiles$
```

File: `4-Makefile`

### Task 5

**Technical interview preparation:**

* You are not allowed to google anything
* Whiteboard first

Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

* grid is a list of list of integers:
  * 0 represents a water zone
  * 1 represents a land zone
  * One cell is a square with side length 1
  * Grid cells are connected horizontally/vertically (not diagonally).
  * Grid is rectangular, width and height don’t exceed 100
* Grid is completely surrounded by water, and there is one island (or nothing).
* The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

* First line contains #!/usr/bin/python3
* You are not allowed to import any module
* Module and function must be documented

```
guillaume@ubuntu:~/0x1C$ cat 5-main.py
#!/usr/bin/python3
\"\"\"
5-main
\"\"\"
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == \"__main__\":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

guillaume@ubuntu:~/0x1C$ 
guillaume@ubuntu:~/0x1C$ ./5-main.py
12
guillaume@ubuntu:~/0x1C$
```

File: `island_perimeter.py`
