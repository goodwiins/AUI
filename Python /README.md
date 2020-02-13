# Python 

* Low-level versus high-level:refers to whether we program using instructions and data objects at the level of the machine (e.g., move 64 bits of data from this location to that location) or whether we program using more abstract operations (e.g., pop up a menu on
* Interpreted versus compiled: refers to whether the sequence of instructions written by the programmer, called source code, is executed directly (by an interpreter) or whether it is first converted (by a compiler) into a sequence of machine-level primitive operations.

# 2.1 The Basic Elements of Python

A Python program, sometimes called a script, is a sequence of definitions and commands. 

## 2.1.1 Objects, Expressions, and Numerical Types
Objects are the core things that Python programs manipulate. Every object has a type that defines the kinds of things that programs can do with that object. 

**Types are either scalar or non-scalar.** Scalar objects are indivisible. Think of them as the atoms of the language.9 Non-scalar objects, for example strings, have internal structure.
**Python has four types of scalar objects:**

* **Int** is used to represent integers.
* **Float** is used to represent real numbers. Literals of type float always include a decimal point (e.g., 3.0 or 3.17 or -28.72). This representation, which is used by all modern programming languages, has many advantages. However, under some situations it causes floating point arithmetic to behave in ways that are slightly different from arithmetic on real numbers.
* **Bool** is used to represent the Boolean values True and False.
* **None** is a type with a single value
* The == operator is used to test whether two expressions evaluate to the same value, and the != operator is used to test whether two expressions evaluate to different values.
* The built-in Python function type can be used to find out the type of an object
* **i+j** the sum of I an j, I-j is I minus j, and I\*j is the product of I and j.If either of them is a float, the result is a float.
* **i//j**is integer division. For example, the value of 6//2 is the int 3 and the value of 6//4 is the int 1\. The value is 1 because integer division returns the quotient and ignores the remainder. If j == 0, an error occurs.
* **i/j**is i divided by j. In Python 3, the / operator, performs floating point divi- sion. For example, the value of 6/4 is 1.5\. If j == 0, an error occurs.
* **i%j**is the remainder when the int i is divided by the int j. It is typically pronounced “i mod j,” which is short for “i modulo j.”
* **i\\j** is i raised to the power j. If i and j are both of type int, the result is an int. If either of them is a float, the result is a float.
* The comparison operators are ==(equal),!=(not equal),**\>**(greater),**\>=**(at least), **\<**, (less) and **\<= **(at most).

## 2.1.2 Variables and Assignment 

* In Python, a variable is just a name, nothing more. An assignment statement associates the name to the left of the = symbol with the object denoted by the expression to the right of the =.
* In Python, variable names can contain uppercase and lowercase letters, digits (but they cannot start with a digit), and the special character \_. Python variable names are case-sensitive.
* Finally, there are a small number of reserved words in Python that have built-in meanings and cannot be used as variable names. Different ver- sions of Python have slightly different lists of reserved words. The reserved words in Python 3 are and, as, assert, break, class, continue, def, del, elif, else, except, False, finally, for, from, global, if, import, in, is, lambda, nonlocal, None, not, or, pass, raise, return, True, try, while, with, and yield.
* Another good way to enhance the readability of code is to add comments. Text following the symbol \# is not interpreted by Python.

Python allows multiple assignment. The statement 

x,y=2,3 binds x to 2 and y to 3.
# 2.2 Branching Programs 