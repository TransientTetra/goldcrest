# GoldCrest
# Code Guidelines
## Overview
This document specifies guidelines for code style and code practices.
All code merged into the repository has to follow these guidelines, and one of the
goals of code reviews is to enforce these rules. You might not agree with chosen
coding style, but such is life, codebase has to have a consistent style.

## Code Style
1. Use tabs for indentation, equal to 4 spaces
2. Parentheses always on new line (Allman style)
3. Put spaces around operators but not on the insides of the brackets `({like + this})`
4. No more than 120 chars per line
5. Inside classes use access blocks in the following order: private, protected, public; create all three even if they
   are left empty, don’t use inline access modifiers
6. Use .hpp extension for header files and .cpp extension for source files
7. Use camelCase for everything apart from class names, use PascalCase for class names; for file and directories’
   names use snake_case
8. Use descriptive names for functions and variables, no cryptic abbreviations and especially no hungarian notation
9. No space before bracket for function, put space for ‘if’, ‘for’ and ‘while’
```cpp
foo(int n);
if (x == 4);
```

10. Do-while loops
```cpp
do
{
	//sth
} while (x == 3)
```

11. Always open blocks fully - don’t use inlines
```cpp
//yes
if (x == 4)
{
	break;
}
```
```cpp
//no
if (x == 4) break;
if (x == 4) {break;}
```

## Code Practices
1. The whole project is written using modern C++ 17
2. Each class should have it's own hpp and cpp file with appropriate filenames (doesn't apply to structs or enums)
3. Code should be commented extensively with attention to how doxygen documentation is generated
   (see [documentation guideline](./documentation.md))
4. Each class, member variable and method has to have a descriptive description (see documentation guidelines)
5. Each class and method has to have unit tests written to test their functionality
   (see [testing guideline](./testing.md))
6. Do not use raw pointers; use references and smart pointers
7. Use const where possible
8. Each source file should have compiler guards (ifndefs, defines and endifs at the start and end of the file)