# Why use files?
* Storage of data in variables and arrays is only temporary (and limited){As long as your program is running}
* Files are used for permanent storage of large amounts of data
  * “Permanent” really means long term
  * “Large” does not mean infinite
* Files can be created, updated, and processed by C programs

# What are files?
* A stream is an abstraction for a channel over which data flows
* How that data is represented and how it is processed depends on
  * The operating system (specifically the file system)
  * The coding of the data
  * The programming language 
  * The program 

# Main file concepts 
* Data hierachy: Data stored in computer systems form a hierarchy extending from a single bit to a database, the major record-keeping entity of a firm. Each higher rung of this hierarchy is organized from the components below it.
* Files and Streams:
  * standard streams
  * user-defined streams
* Text files vs. Binary files
* Sequential Access vs. Random Access files

# Data Hierarchy
* Bit: smallest data item Value of 0 or 1
* Byte: 8 bits 
  * Used to store a character
  * Decimal digits, letters, and special symbols
* Field: group of characters conveying meaning ​
  * Example: your name
* Record: group of related fields​
  * Represented by a struct or a class​
  * Example: In a payroll system, a record for a particular employee that contained his/her identification number, name, address, etc.​
* File: group of related records​
  * Example: payroll file​
* Database: group of related files​
* Data files​
  * Record key​
    * Identifies a record to facilitate the retrieval of specific records from a file​
  * Sequential file ​
    * Records typically sorted by key​
## Files and Streams​
* A stream:​
  * is a string of bytes​
  * is associated with a specific file or other input source or output destination.​
  * provides communication channel between files and programs​
  * it needs to be opened and closed​
* Input stream: bytes flow from a device to main memory​

Output stream: bytes flow from main memory to a device​

Input/output  stream: bytes flow in both directions; restricted to some stream types​

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






