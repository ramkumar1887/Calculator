# Calculator

A simple command-line calculator program written in C that supports basic arithmetic operations.

## Features

- Supports basic arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/)
- Handles operator precedence (multiplication and division are evaluated before addition and subtraction)
- Supports floating-point numbers
- Interactive input mode
- Displays results with 2 decimal places

## Usage

1. Compile the program:
```bash
gcc cal.c -o calculator
```

2. Run the program:
```bash
./calculator
```

3. Enter your calculation:
- Type numbers and operators in sequence
- End your calculation with '=' to see the result
- Example: `2 + 3 * 4 =` will output `14.00`

## Examples

- `2 + 3 =` → `5.00`
- `10 - 4 * 2 =` → `2.00`
- `6 / 2 + 3 =` → `6.00`

## Notes

- The calculator follows standard operator precedence rules
- Division by zero will result in undefined behavior
- Input should be entered one number/operator at a time
- The program will continue accepting input until '=' is entered
