#include <stdio.h>
// Add in:
// Check value is over 60 over 2:1
// check value is over 70 for a first
// check that the value is a valid mark (between 0 and 100, inclusive)
int main() {

    int mark;

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

    if (mark<0)
    {
        printf ("The mark of %d is not valid\n", mark);
    }
    else if (mark >60)
    {
        printf("Mark is 2:1");
    }
    else if (mark >70)
    {
        printf("Mark %d is a first",mark);
    }
    else if (mark < 40 )
    {
        printf ("The mark of %d is a fail\n", mark);
    }

    return 0;
}