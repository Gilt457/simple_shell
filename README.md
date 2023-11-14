0x16. C - Simple Shell

<h1>Description</h1>

An uncomplicated UNIX command interpreter that carries out the operations of the basic shell (sh). In addition, additional functions are provided. The entire C code for this program was developed as an important assignment for ALX Africa Software Engineering.

<h1>Setting up</h1>

This repository should be cloned to the working directory. Files ought to be built with GCC and using the following parameters for optimal performance: pedantic -wall -Wextra -Werror -std=gnu89

<h1>Application</h1>

Following compilation, the final program can be executed standalone, either interactively or non-interactively.

<h1>Mode of Interaction</h1>

Simply run the application in interactive mode and allow for the response to arrive. From there, you can freely type commands, departing with the "exit" command or ctrl-D.

<h1>Mode Without Interaction</h1>

To execute the desired command in non-interactive mode, echo it and pipe it into the program as follows:

echo "ls" | ./shell

In non-interactive mode, the application will terminate once the specified command has been completed.
