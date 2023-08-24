# Monty Interpreter

## About

This project is a Monty ByteCode interpreter implemented in C. It reads Monty ByteCode files and executes the specified instructions on the stack data structure. The interpreter provides support for a variety of opcodes, allowing you to perform various stack manipulation operations.

## Getting Started

To get started with the Monty Interpreter, follow these steps:

1. Clone this repository to your local machine.
2. Compile the code using the provided compilation command.
3. Run the interpreter by providing the path to a Monty ByteCode file.

## Usage

To run the Monty Interpreter, use the following command
```bash
./monty path/to/bytecode/file


## Supported Opcodes 
The interpreter supports the following opcodes:

push: Pushes an integer onto the stack.
pall: Prints all values on the stack.
pint: Prints the value at the top of the stack.
pop: Removes the top element from the stack.
swap: Swaps the top two elements of the stack.
add: Adds the top two elements of the stack.
nop: No operation; does nothing.
For more details on opcode usage and examples, refer to the provided Monty ByteCode files and the assignment instructions.
