# Setting Up - C Project

## Description
This project involves finding the **largest possible square** in a 2D grid while avoiding obstacles. The board can either be **read from a file** or **generated dynamically** based on user input. The program utilizes dynamic programming techniques to efficiently determine the optimal square and replaces its area with 'x' characters. 

The project highlights essential C programming concepts, such as **memory management, file handling, and algorithm optimization**. It provides a structured and modular approach to problem-solving.

## Features
The **Setting Up** program includes the following functionalities:

- **Read Board from File**: Loads a grid from a text file and processes it.
- **Generate Board**: Creates a grid dynamically with a user-defined pattern.
- **Find Largest Square**: Identifies and marks the largest square using 'x'.
- **Print Processed Board**: Displays the final board with the largest square highlighted.
- **Error Handling**: Ensures file validation and correct input processing.

## Installation
To compile and run the project, follow the directory structure and commands below:

### Folder Structure
```
/include/
  ├── my.h              # Header file containing function declarations and structurs
/src/
  ├── setting_up.c            # Entry point of the program
  ├── parse_matrice.c           # Functions for handling the board (reading)
  ├── generate_map.c           # Functions for handling the board generation
  ├── handle_memory.c           # Functions for handling board malloc and free
Makefile                 # Compilation rules
README.md               # This file
```

### Compilation
Clone the repository:
```sh
git clone https://github.com/jawedlahrouri/Setting_up-Epitech.git
cd setting_up
```
Compile the project:
```sh
make
```
Run the program with a board file:
```sh
./setting_up example_file
```
Run the program with generated input:
```sh
./setting_up [size] [pattern (o and .)]
```

## Example Usage
### Using a File
Given a file `example_file`:
```
9
...........................
....o......................
............o..............
...........................
....o......................
..............o............
...........................
......o..............o.....
..o.......o................
```
Running:
```sh
./setting_up example_file | cat -e
```
Outputs:
```
.....xxxxxxx................$
....oxxxxxxx................$
.....xxxxxxxo...............$
.....xxxxxxx................$
....oxxxxxxx................$
.....xxxxxxx...o............$
.....xxxxxxx................$
......o...............o.....$
..o.......o.................$
```
### Generating a Board
```sh
./setting_up 6 "..o.." | cat -e
```
Outputs:
```
..oxx.$
.o.xx.$
o....o$
....o.$
...o..$
..o...$
```

## Technical Details
The program processes the board efficiently using a **dynamic programming approach** to determine the largest possible square. The solution prioritizes the highest square and, in case of ties, selects the leftmost one.

### Key Functions
- `setting_up()`: Call all the functions for execute the code.
- `generate_map()`: Creates a board dynamically with a given pattern.
- `make_square()`: Implements the algorithm to locate the optimal square.

## Contributors
This project was developed as part of an EPITECH programming exercise.

