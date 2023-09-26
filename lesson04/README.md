# lesson 4: the pieces of a C program: statements, expressions, and operators

# statements

statement
: a complete instruction that directs the computer to carry out some task
: must end with a `;`

## the impact of white space on statements

white space
: spaces tabs (vertical and horizontal) blank lines

- C compiler isn't sensitive to white space. EXCEPT in literal string constants

string
: series of characters

## creating a null statement

null statement
: a semicolon by itself on a line

- usefulness "later"


## working with compound statements

compound statement aka block
: a group of two or more C statements in braces

- a block can be used anywhere a single statement can be used

# understanding expressions

expression  
: anything that evaluates to a numeric value.

## simple

literal constant  
: evaluates to its own value

symbolic constant  
: evaluates to the value given in the `#define` directive

## complex

complex expressions  
: consist of simple expressions connected by operators


# operators

- categories:
  - assignment
  - math
  - relational
  - logical

## the assignment operator

- `=`
- ```c
    x = y;
    ```
  - means "assign the value of y to x."
- ```c
    variable = expression;
    ```


## the mathematical operators
## operator precedence and parentheses
## order of subexpression evaluation
## the relational operator

# the `if` statement
## the `else` clause

# evaluating relational expressions
## the precedence of relational operators

# the logical operators

# more on true/false values
## the precedence of operations
## compound assignment operators
## the conditional operator
## the comma operator

# operator precedence revisited

# summary