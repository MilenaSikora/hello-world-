#include <stdio.h>
#include <string.h>

int main()
{
   char buf[BUFSIZ];
   char *p;

   printf ( "Please enter your name\n", sizeof(buf));

   if (fgets(buf, sizeof(buf), stdin) !=NULL)
   {
       printf ("Hello >%s<\n", buf);
       if ((p=strchr(buf, '\n')) !=NULL)
        *p = '0';
       printf ("Enjoy a play, >%s<n", buf);

   }
   return 0;
}
