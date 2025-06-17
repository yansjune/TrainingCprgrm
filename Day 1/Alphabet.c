
#include <stdio.h>

int main()
{
    char var = 'S';
   
    if(var>=65 && var<=90 || var>=97 && var<=122){
        printf("Alphabet");
    }
    else{
        printf("Not an alphabet");
    }

    return 0;
}
