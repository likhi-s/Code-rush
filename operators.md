# OPERATORS
- Operators are symbols which performs actions on operands.
- These operations can be mathematical, relational, bitwise, logical, or conditional.
- The values or variables that operators work on are called operands.
- Example: in a+b, + is operator, a,b are operands.

## Types of operators

1. **Arithmetic operators** are used to perform basic mathematical operations such as addition, subtraction, multiplication, division, and finding the remainder.
- Addition (+)
  * Adds two operands.
- Subtraction (-)
  * Subtracts the second operand from the first.
- Multiplication (*)
  * Multiplies two operands.
- Division (/)
  * Divides the first operand by the second.
- Modulus (remainder) (%)
  * Gives the remainder of a division.

2. **Relational Operators** are used to compare two values or expressions. 
   * They return 1 (true) if the condition is satisfied and 0 (false) otherwise.

- Equal to (==)
  * Checks if two values are equal.
- Not equal to (!=)
  * Checks if two values are not equal.
- Greater than (>)
  * Checks if the first value is greater than the second.
- Less than (<)
  * Checks if the first value is less than the second.
- Greater than or equal to (>=)
  * Checks if the first value is greater than or equal to the second. 
- Less than or equal to (<=)
  * Checks if the first value is less than or equal to the second.
  
3. **Logical Operators** are symbols used to combine or modify conditions (true/false)

- Logical AND (&&)
  *  Returns true if both conditions are true.
- Logical OR (||)
  *  Returns true if at least one condition is true.
- Logical NOT (!)
  * Reverses the result of a condition (true becomes false, and false becomes true)
  
4. **Assigment Operators** are used to assign values to variables.

- Assignment (=)
  * Assigns a value to a variable.
- Add and Assign (+=)
  * Adds a value to the current value of a variable and stores the result.
- Subtract and Assign (-=)
  * Subtracts a value from the current value of a variable and stores the result.
- Multiply and Assign (*=)
  * Multiplies the current value of a variable by another value and stores the result.
- Divide and Assign (/=)
  * Divides the current value of a variable by another value and stores the result.
- Modulus and Assign (%=)
  * Finds the remainder of a division and stores the result in the variable.
  
  
5. **Bitwise Operators**  perform operations directly on the individual bits of integer values.
- Bitwise AND (&)
  * Returns 1 when both bits are 1.
- Bitwise OR (|)
  * Returns 1 when at least one bit is 1
- Bitwise XOR (^)
  * Returns 1 when bits are different.
- Bitwise NOT (~)
  * Inverts all the bits of a number (1 becomes 0 and 0 becomes 1).
- Bitwise Left Shift (<<)
  * Moves bits to the left, filling new bits with 0.
- Bitwise Right Shift (>>)
  * Moves bits to the right, removing the rightmost bits.
  

6. **Unary  Operators** operate on a single operand.
- Unary plus (+)
  * Makes a number positive (usually redundant).
- Unary minus (-)
  * Changes the sign of a number (negative).
- Increment (++)
  * Increases the value of the operand by 1.
- Decrement (--)
  * Decreases the value of the operand by 1.
- Address-of (&)
  * Returns the memory address of the operand.
- Dereference (*)
  * Accesses the value stored at the memory address pointed by a pointer.

7. **Ternary Operator(? :)** is a shorthand for if-else conditions.
- Syntax: condition ? value_if_true : value_if_false
   * The condition is evaluated. 
   * If it's true, the value_if_true is returned; otherwise, the value_if_false is returned.
   
8. **sizeof() Operator**  
- Returns the size (in bytes) of a data type or variable.

9. **Comma Operator (,)**
- Allows multiple expressions to be evaluated in a single statement, with the result of the last expression being used.

10. **Cast Operator**  is used to explicitly convert a variable from one data type to another.
-Types of Casting:
    1. Implicit Casting (Automatic)
          * Done by the compiler automatically when there is no risk of data loss. 
    2. Explicit Casting (Type Casting) -> here we use cast operator 
          * Done manually by the programmer when we want to convert a variable to a different type. 
          
11. **Dereference Operator (*)**
- It is used to access the value stored at the memory address that a pointer points to.

12. **Address-of Operator (&)**
- It is used to get the memory address of a variable.

13. **Dot(.) and Arrow Operator(->)**
- 
