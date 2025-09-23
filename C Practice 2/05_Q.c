/*
✅ Types of Instructions in C

Type Declaration Instruction
Used to declare variables before use.

Example:
int a, b;
float pi = 3.14;


Arithmetic Instruction
Used for calculations (+, -, *, /, %).

Example:
int sum = a + b;
int remainder = a % b;


Control Instruction
Alters the flow of execution.

Types: if-else, switch, loops (for, while, do-while).

✅ Type Conversion in C
Implicit Conversion (Type Promotion)
Smaller type automatically converted to larger type.

int x = 10;
float y = x; // int → float automatically


Explicit Conversion (Type Casting)
Manual conversion using (type).

float a = 10.5;
int b = (int)a; // b = 10

----------------------------

✅ Operators in C

1. Arithmetic Operators
+ , - , * , / , %

2. Relational Operators
== , != , > , < , >= , <=

3. Logical Operators
&& (AND), || (OR), ! (NOT)

4. Assignment Operators
= , += , -= , *= , /= , %=

5. Increment & Decrement
++ , --
i++ (post increment) → use then increase
++i (pre increment) → increase then use

6. Conditional (Ternary) Operator
condition ? value_if_true : value_if_false;
Ex:
int a = 10, b = 20;
int max = (a > b) ? a : b; // max = 20


✅ Operator Precedence

Highest → Lowest (common ones):

1.() (Parentheses)
2.++ , -- (Increment/Decrement)
3.* , / , %
4.+ , -
5.< , > , <= , >=
6.== , !=
7.&&
8.||
9.= , += , -= , *=

Ex:

int result = 10 + 20 * 3; // result = 70 (not 90)

*/

#include <stdio.h>

int main()
{   
    int a ,b;
    printf("Enter First Number:\n");
    scanf("%d",&a);

    printf("Enter second Number:\n");
    scanf("%d",&b);

    printf("Sum = %d\n",a+b);
    printf("Difference = %d \n",a-b);
    printf("Product = %d \n",a*b);
    printf("Quotient = %d\n", a/b);
    printf("Remainder = %d \n",a%b);
    
    return 0;
}

//Output:

/*
Enter First Number:
13
Enter second Number:
2
Sum = 15
Difference = 11
Product = 26
Quotient = 6
Remainder = 1
*/