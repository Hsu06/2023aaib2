#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("myFuncA()裡的A是%d\n", x);
}
int main()
{
    int x=100;
    printf("main()裡的A是%d\n", x);
    myFuncA();
    printf("main()裡的A是%d\n", x);
}

