# Variables, if, else, while

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/Everything%20you%20need%20to%20know%20to%20start%20with%20C.pdf" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if&hellip;else”, “while loops”.</em>)</li>
<li><a href="https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
<li><a href="https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html" title="integers" target="_blank">integers</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
<li><a href="https://www.cprogramming.com/tutorial/c/lesson2.html" title="If statements in C" target="_blank">If statements in C</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm" title="if...else statement" target="_blank">if&hellip;else statement</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm" title="Relational operators" target="_blank">Relational operators</a> </li>
<li><a href="https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/" title="Logical operators" target="_blank">Logical operators</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_while_loop.htm" title="while loop in C" target="_blank">while loop in C</a> </li>
<li><a href="https://www.youtube.com/watch?v=Ju1LYO9pkaI" title="While loop" target="_blank">While loop</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ascii</code> (<em>You do not need to learn about <code>scanf</code>, <code>getc</code>, <code>getchar</code>, <code>EOF</code>, <code>EXIT_SUCCESS</code>, <code>time</code>, <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code>, <code>for</code> loops, <code>do...while</code> loops, functions.</em>)</li>
</ul>


# Learning Objectives 

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the `if`, `if ... else` statements
* How to use comments
* How to declare variables of types `char`, `int`, `unsigned int`
* How to assign values to variables
* How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
* How to use the `while` loop
* How to use variables with the `while` loop
* How to print variables using `printf`
* What is the `ASCII` character set
* What are the purpose of the `gcc` flags `-m32` and `-m64`

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>


# Tasks

## 0. Positive anything is better than negative nothing

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable `n` will store a different value every time you will run this program
* The output of the program should be:
    * The number, followed by
        * if the number is greater than 0: `is positive`
        * if the number is 0: `is zero`
        * if the number is less than 0: `is negative`
    * followed by a new line

**Solution:** [0-positive_or_negative.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
$ amonkeyprogrammer@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
$ amonkeyprogrammer@ubuntu:~/0x01$ 
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 0-positive_or_negative.c

## 1. The last digit

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
* The variable `n` will store a different value every time you run this program
* The output of the program should be:
    * The string `Last digit of`, followed by
    * `n`, followed by
    * the string `is`, followed by
        * if the last digit of `n` is greater than 5: the string `and is greater than 5`
        * if the last digit of `n` is 0: the string `and is 0`
        * if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    * followed by a new line

**Solution:** [1-last_digit.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ amonkeyprogrammer@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 1-last_digit.c


## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

**Solution:** [2-print_alphabet.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
$ amonkeyprogrammer@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
$ amonkeyprogrammer@ubuntu:~/0x01$
```

### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 2-print_alphabet.c


## 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

**Solution:** [3-print_alphabets.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
$ amonkeyprogrammer@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 3-print_alphabet.c


## 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except `q` and `e`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

**Solution:** [4-print_alphabt.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
$ amonkeyprogrammer@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
$ amonkeyprogrammer@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 4-print_alphabet.c


## 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

* All your code should be in the `main` function

**Solution:** [5-print_numbers.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
$ amonkeyprogrammer@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 5-print_numbers.c


## 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

* You are not allowed to use any variable of type `char`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` twice in your code
* All your code should be in the `main` function

**Solution:** [6-print_numberz.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
$ amonkeyprogrammer@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
$ amonkeyprogrammer@ubuntu:~/0x01$ 
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 6-print_numberz.c

## 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

**Solution:** [7-print_tebahpla.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
$ amonkeyprogrammer@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 7-print_tebalpha.c

## 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

**Solution:** [8-print_base16.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
$ amonkeyprogrammer@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 8-print_base16.c

## 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by `,`, followed by a space
* Numbers should be printed in ascending order
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` four times maximum in your code
* You are not allowed to use any variable of type `char`

**Solution:** [9-print_comb.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
$ amonkeyprogrammer@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 9-print_comb.c


## 10. 00..99

Write a program that prints the numbers from 00 to 99.

* Numbers must be separated by `,`, followed by a space
* Numbers should be printed in ascending order, with two digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` five times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

**Solution:** [10-print_comb2.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/10-print_comb2.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
$ amonkeyprogrammer@ubuntu:~/0x01$ ./10-print_comb2 
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
$ amonkeyprogrammer@ubuntu:~/0x01$ 
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 10-print_comb2.c


## 11. Inventing is a combination of brains and materials. The more brains you use, the less material you need

Write a program that prints all possible different combinations of two digits.

* Numbers must be separated by `,`, followed by a space
* The two digits must be different
* `01` and `10` are considered the same combination of the two digits `0` and `1`
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` five times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

**Solution:** [100-print_comb3.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
$ amonkeyprogrammer@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 100-print_comb3.c


## 12. The success combination in business is: Do what you do better... and: do more of what you do...

Write a program that prints all possible different combinations of three digits.

* Numbers must be separated by `,`, followed by a space
* The three digits must be different
* `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` six times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

**Solution:** [101-print_comb4.c](https://github.com/musfy/alx-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)

```
$ amonkeyprogrammer@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 101-print_comb4.c -o 101-print_comb4
$ amonkeyprogrammer@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
$ amonkeyprogrammer@ubuntu:~/0x01$
```
### Repo:

    * GitHub repository: alx-low_level_programming
    * Directory: 0x01-variables_if_else_while
    * File: 101-print_comb4.c
