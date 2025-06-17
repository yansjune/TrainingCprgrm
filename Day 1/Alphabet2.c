
#include <stdio.h>

int main()
{
    char var;
    printf("Enter an alphabet: ");
    scanf("%c",&var);
    
    if(var == 'Z' || var == 'z'){
        printf("%c",var - 25);
    }
    else{
        printf("%c",var+1);
    }

    return 0;
}
