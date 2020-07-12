
//Deomnstates automatic and static local variables
#include <stdio.h>

void func1(void);

int main(void)
{
    int count;

    for (count=0; count<20; count++)
    {
        printf("\nAt iteration %d: ", count);
        func1();
    }
    return 0;
}
void func1(void)
{
    //retained the value of x each time func1 is called
    static int x = 0;
    //reset/reinitialize the value of y each time func1 called
    int y = 0;

    printf("x = %d, y = %d\n", x++, y++ );
    printf("\t\tvalue of y each time func called (reinitialized to 0 each time then incremented to 1) = %d\n", y);

}
