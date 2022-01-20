//函数的调用

#include <stdio.h>
void hello_world()
{
    printf("Hello, world!\n");
}
void three_hellos()
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();/*调用此函数*/
}
int main()
{
    three_hellos();/*调用此函数*/
    return 0;
}
