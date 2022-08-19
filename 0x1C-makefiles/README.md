C - Makefiles
-------------
In this project, I practiced writing Makefiles.

Tests
-----
- tests:Folder of test files.

Helper Files
------------
- school.c: C function that displays a seahorse in text. Used for Makefile practice purposes throughout project.

- main.c: Main C function that runs the function defined in school.c.

Header File 
-----------
- m.h: Header file defining the function prototype used in school.c.

Tasks
-----
###0. make -f 0-Makefile

[0-Makefile](https://github.com/Brown2022/alx-low_level_programming/0x1C-makefiles/0x1C-makefiles-0-Makefile): Create first Makefile.
Requirements:
- name of the executable: school
- rules: all
	- The all rule builds your executable
-variables: none.

(Run: make -f 0-Makefile, gcc main.c school.c -o school)

1. make -f 1-Makefile
---------------------
[1-Makefile]((https://github.com/Brown2022/alx-low_level_programming/0x1C-makefiles/0x1C-makefiles-1-Makefile): Makefile that creates an executable school based on school.c and main.c.

Requirements:
- name of the executable: school
- rules: all
	- The all rule builds your executable
- variables: CC, SRC
	- CC: the compiler to be used
	- SRC: the .c files

2. make -f 2-Makefile
---------------------
[2-Makefile]((https://github.com/Brown2022/alx-low_level_programming/0x1C-makefiles/0x1C-makefiles-2-Makefile):Makefile that creates an executable school based on school.c and main.c. Builds on 1-Makefile with

equirements:
- name of the executable: school
- rules: all
	- The all rule builds your executable
- variables: CC, SRC, OBJ, NAME
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
- The all rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files

3. make -f 3-Makefile
---------------------
[3-Makefile]((https://github.com/Brown2022/alx-low_level_programming/0x1C-makefiles/0x1C-makefiles-3-Makefile): Makefile that creates an executable school based on school.c and main.c. Builds on 2-Makefile with

Requirements:
- name of the executable: school
- rules: all, clean, oclean, fclean, re
	- all: builds your executable
	- clean: deletes all Emacs and Vim temporary files along with the executable
	- oclean: deletes the object files
	- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	- re: forces recompilation of all source files
- variables: CC, SRC, OBJ, NAME, RM
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
	- RM: the program to delete files
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail
- You are not allowed to have a list of all the .o files

4. A complete Makefile
----------------------
[4-Makefile]((https://github.com/Brown2022/alx-low_level_programming/0x1C-makefiles/0x1C-makefiles-4-Makefile): Makefile that creates an executable school based on school.c and main.c. Builds
on 3client_loop: send disconnect: Connection reset by peerete Makefile
- variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
	- RM: the program to delete files
	- CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail

5. Island Perimeter
-------------------
Technical interview preparation:
- You are not allowed to google anything
- Whiteboard first

Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

- grid is a list of list of integers:
	- 0 represents a water zone
	- 1 represents a land zone
	- One cell is a square with side length 1
	- Grid cells are connected horizontally/vertically (not diagonally).
	- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:

- First line contains #!/usr/bin/python3
- You are not allowed to import any module
- Module and function must be documented

guillaume@ubuntu:~/0x1C$ cat 5-main.py
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
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
