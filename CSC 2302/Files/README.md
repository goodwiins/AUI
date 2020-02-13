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






