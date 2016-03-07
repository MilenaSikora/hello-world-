#include <stdio.h>

int main()
{
    int this_is_your_name;

    printf("Please enter your name: ");
    scanf( "%d", &this_is_your_name );
    printf( "Hello %d", this_is_your_name );
    getchar();
    return 0;
}
