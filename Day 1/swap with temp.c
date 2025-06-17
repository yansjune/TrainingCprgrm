
#include <stdio.h>

int main()
{
    int a=10,b=7,temp;
    temp = a;//10
    a = b;//7
    b = temp;//10
    
    printf("a = %d, b = %d",a,b);

    return 0;
}
