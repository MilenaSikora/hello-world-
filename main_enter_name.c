#include <stdio.h>

int main()
{
    int name;

    printf("Please enter your name: ");
    scanf( "%d", &name );
    printf( "Hello %d", &name );
    getchar();
    return 0;
}
