# Hello World, C!

This is the first project made with C and consists of knowing some of its bases.

## Concepts
  For this project, students are expected to look at this concept:


<a href="https://github.com/musfeed/alx-low_level_programming/blob/main/Everything%20you%20need%20to%20know%20to%20start%20c.pdf">What you need to know to start C programming</a>

<a href="https://www.youtube.com/embed/co0b0xLEuRM">Hello World</a>

## Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://github.com/musfeed/alx-low_level_programming/blob/main/Everything%20you%20need%20to%20know%20to%20start%20c.pdf" target="_blank">Everything you need to know to start with C</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
<li><a href="https://en.wikipedia.org/wiki/Dennis_Ritchie" target="_blank">Dennis Ritchie</a> </li>
<li><a href="https://www.youtube.com/watch?v=de2Hsvxaf8M" target="_blank">&ldquo;C&rdquo; Programming Language: Brian Kernighan</a> </li>
<li><a href="https://www.youtube.com/watch?v=smGalmxPVYc" target="_blank">Why C Programming Is Awesome</a> </li>
<li><a href="https://www.youtube.com/watch?v=rk2fK2IIiiQ" target="_blank">Learning to program in C part 1</a> </li>
<li><a href="https://www.youtube.com/watch?v=FwpP_MsZWnU" target="_blank">Learning to program in C part 2</a> </li>
<li><a href="https://www.youtube.com/watch?v=VDslRumKvRA" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="https://github.com/holbertonschool/Betty/wiki" target="_blank">Betty Coding Style</a> </li>
<li><a href="https://twitter.com/unix_byte/status/1024147947393495040?s=21" target="_blank">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
<li><a href="http://harmful.cat-v.org/software/c++/linus" target="_blank">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>gcc</code></li>
<li><code>printf (3)</code></li>
<li><code>puts</code></li>
<li><code>putchar</code></li>
</ul>



# Learning Objectives
<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official Holberton C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library - function
* How does the main function influence the return value of the program


<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file at the root of the repo, containing a description of the repository</li>
<li>A <code>README.md</code> file, at the root of the folder of <em>this</em> project, containing a description of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

<h3>Shell Scripts</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your scripts should be exactly two lines long (<code>$ wc -l file</code> should print 2)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
</ul>

<h2>More Info</h2>

<h3>Betty linter</h3>

<p>To run the Betty linter just with command <code>betty &lt;filename&gt;</code>:</p>

<ul>
<li>Go to the <a href="https://github.com/holbertonschool/Betty" title="Betty" target="_blank">Betty</a> repository</li>
<li>Clone the <a href="https://github.com/holbertonschool/Betty" title="repo" target="_blank">repo</a> to your local machine</li>
<li><code>cd</code> into the Betty directory</li>
<li>Install the linter with <code>sudo ./install.sh</code></li>
<li><code>emacs</code> or <code>vi</code> a new file called <code>betty</code>, and copy the script below:</li>
</ul>

<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH=&quot;/usr/local/bin&quot;
BETTY_STYLE=&quot;betty-style&quot;
BETTY_DOC=&quot;betty-doc&quot;

if [ &quot;$#&quot; = &quot;0&quot; ]; then
    echo &quot;No arguments passed.&quot;
    exit 1
fi

for argument in &quot;$@&quot; ; do
    echo -e &quot;\n========== $argument ==========&quot;
    ${BIN_PATH}/${BETTY_STYLE} &quot;$argument&quot;
    ${BIN_PATH}/${BETTY_DOC} &quot;$argument&quot;
done
</code></pre>
<ul>
<li>Once saved, exit file and change permissions to apply to all users with <code>chmod a+x betty</code></li>
<li>Move the <code>betty</code> file into <code>/bin/</code> directory or somewhere else in your <code>$PATH</code> with <code>sudo mv betty /bin/</code></li>
</ul>

<p>You can now type <code>betty &lt;filename&gt;</code> to run the Betty linter!</p>



# Tasks

## 0. Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`


```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ export CFILE=main.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./0-preprocessor 
$ amonkeyprogrammer@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ 
```
 

  
    
### Repo
  * GitHub repository: alx-low_level_programming
  * Directory: 0x00-hello_world
  * File: [0-preprocessor](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor)
        

  
## 1. Compiler

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`. 
    * Example: if the C file is `main.c`, the output file should be `main.o`

```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ export CFILE=main.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./1-compiler 
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@$ amonkeyprogrammer@ubuntu:~/c/0x00$
```

### Repo    
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [1-compiler](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler)

## 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`. 
    * Example: if the C file is `main.c`, the output file should be `main.s`



```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ export CFILE=main.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./2-assembler
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
$ amonkeyprogrammer@ubuntu:~/c/0x00$
```

### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [2-assembler](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler)

## 3. Name

Write a script that compiles a C file and creates an executable named `cisfun`.

* The C file name will be saved in the variable `$CFILE`

 

```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ export CFILE=main.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./3-name 
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
$ amonkeyprogrammer@ubuntu:~/c/0x00$
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [3-name](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/3-name)


## 4. Hello, puts

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

* Use the function `puts`
* You are not allowed to use `printf`
* Your program should end with the value `0`



```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ gcc 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
$ amonkeyprogrammer@ubuntu:~/c/0x00$ echo $?
0
$ amonkeyprogrammer@ubuntu:~/c/0x00$ 
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [4-puts.c](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c)

## 5. Hello, printf

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

* Use the function `printf`
* You are not allowed to use the function `puts`
* Your program should return `0`
* Your program should compile without warning when using the `-Wall gcc` option



```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ gcc -Wall 5-printf.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
$ amonkeyprogrammer@ubuntu:~/c/0x00$ echo $?
0
$ amonkeyprogrammer@ubuntu:~/c/0x00$ 
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [5-printf.c](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c)

## 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.


* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return `0`
* You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32 gcc` option


```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
$ amonkeyprogrammer@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ amonkeyprogrammer@ubuntu:~/c/0x00$ echo $?
0
$ amonkeyprogrammer@ubuntu:~/c/0x00$
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [6-size.c](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c)


## 7. Intel

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`.
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    * Example: if the C file is `main.c`, the output file should be `main.s`


```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ export CFILE=main.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./100-intel 
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
$ amonkeyprogrammer@ubuntu:~/c/0x00$ 
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [100-intel](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/100-intel)
          
## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
* Your program should return 1
* Your program should compile without any warnings when using the `-Wall gcc` option
 

```
$ amonkeyprogrammer@ubuntu:~/c/0x00$ gcc -Wall -o quote 101-quote.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
$ amonkeyprogrammer@ubuntu:~/c/0x00$ echo $?
1
$ amonkeyprogrammer@ubuntu:~/c/0x00$ ./quote 2> q
$ amonkeyprogrammer@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
$ amonkeyprogrammer@ubuntu:~/c/0x00$ grep printf < 101-quote.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ grep put < 101-quote.c
$ amonkeyprogrammer@ubuntu:~/c/0x00$ 
```
### Repo
        
   * GitHub repository: alx-low_level_programming
   * Directory: 0x00-hello_world
   * File: [101-quote.c](https://github.com/musfeed/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c)

