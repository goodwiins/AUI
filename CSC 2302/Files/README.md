#Why use files?
* Storage of data in variables and arrays is only temporary (and limited){As long as your program is running}
* Files are used for permanent storage of large amounts of data
  * “Permanent” really means long term
  * “Large” does not mean infinite
* Files can be created, updated, and processed by C programs

#What are files?
* A stream is an abstraction for a channel over which data flows
* How that data is represented and how it is processed depends on
  * The operating system (specifically the file system)
  * The coding of the data
  * The programming language 
  * The program 

#Main file concepts 
* Data hierachy: Data stored in computer systems form a hierarchy extending from a single bit to a database, the major record-keeping entity of a firm. Each higher rung of this hierarchy is organized from the components below it.
* Files and Streams:
  * standard streams
  * user-defined streams
* Text files vs. Binary files
* Sequential Access vs. Random Access files

#Data Hierarchy
* Bit: smallest data item Value of 0 or 1
* Byte: 8 bits 
  * Used to store a character
  * Decimal digits, letters, and special symbols
streams


txt diles vs Bn file takes big chungs txt don't do do that
### Sequential file-like standard streams you have used:
  * stdin: standard input (keyboard)
  * stdout: standard output (screen)
  * stderr: standard error (screen)

They are managed by the runtime environment:
**DO NOT open them or close them**
![Streams](https://github.com/iliassjabali/AUI/blob/master/CSC%202302/Files/File%20Streams.png)
# File Streams
Unlike built-in streams
* They must be declared 
* They must be opened 
  * For reading 
  * For writing 
  * for both reading and writing 
* They must be closed **Especially for writing  **

#Declaring & Using Files
1. Define a file variable:
      ```c
      FILE *cfPtr;
      ```
      creates a file pointer called `cfptr` which will eventually point to a file

2. Type “FILE” is defined in stdio.h






