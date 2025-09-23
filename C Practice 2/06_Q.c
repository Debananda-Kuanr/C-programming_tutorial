#include <stdio.h>

int main()
{

    /*
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
    */
    int a = 5, b = 2;
    int result = a + b * a / b - 1;
//    = a + b * a / b - 1
//    = a + (b * a) / b - 1        (multiply first)
//    = a + 10 / b - 1             (b * a = 2 * 5 = 10)
//    = a + 5 - 1                  (10 / 2 = 5)
//    = 5 + 5 - 1                  (a = 5)
//    = 9


    printf("Output Will %d\n",result );

        return 0;
}