# Basics Concepts to begin - C programming

C language is a **general-purpose programming language** that has been around for nearly 50 years. <br><br>
<hr>

**Valid Datatypes** in C Language are 
- Int, Float, Double, Char

Then what about string ? <br>
- String is array of characters in C Language
<hr>

**Format specifiers** in C Language :<br>
%d  - Integer<br>
%f  - Float<br>
%c  - Charecter<br>
%s  - String <br>
%u  - Unsigned Integer ( Unsigned integers are always positive )<br>
%ld - Long Integer<br>

A **constant** - ( const ) stores a value that cannot be changed from its initial assignment. 
<hr>

<h2>Input in C Language </h2>

Char - getchar()<br>
String - gets(), fgets<br>(string, bufsize, stdin)<br>
       - scanf("%d", &a)<br>
       - scanf("%*d") - the field is to ignored
<hr>
<h2>Output in C Language </h2>
char - putchar()<br>
string - putstring()<br>
- printf()
<hr>
<h2>Formating in C Language </h2>

**%[-][width].[precision]conversion character**

- Optional 
- Width ( Before Decimal )
- Precision ( After Decimal )
- Conversion 
<br>

NOTE : To print % use %% 
<hr>
<h2>Comments in C Language </h2>

Use 

```// ``` for single line comment.

```/* */ ``` for multiple line comment.

<hr>
<h2>Increment & Decrement in C Language </h2>

- Prefix - Increment or Decrement then assign ( ++a / --a )
- Postfix - Assign then Increment or Decrement ( a++ / a-- )
