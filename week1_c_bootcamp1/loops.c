#include <stdio.h>

int main()

{
    int a;
    int b;
    int c;
    int d;
    for (a=1; a<11; a++)
    {
         printf ("a is equal to %d\n", a);
    }
    printf ("I've finished the loop and a is equal to %d\n", a);


    for (b=0; b<51; b+=2)
    {
         printf ("b is equal to %d\n", b);
    }
    printf ("I've finished the loop and b is equal to %d\n", b);

    

    for (d=100; d>0; d-=5)
    {
         printf ("d is equal to %d\n", d);
    }
    printf ("I've finished the loop and d is equal to %d\n", d);

    

    {
         printf ("a is equal to %d\n", d);
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    for (c=0; c<51; c+=2)
    {
         printf ("c is equal to %d\n", c);
    }
    printf ("I've finished the loop and c is equal to %d\n", c);

    return (0);


}