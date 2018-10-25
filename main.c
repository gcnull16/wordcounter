#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHARS 60

int main()
{
    printf("Enter some text: ");

    char enteredtext[MAX_CHARS];
    gets(enteredtext);

    int a; //this will navigate through the array.
    int digitcounter = 0;

    for (a = 0; a < MAX_CHARS; a++)
    {
        int currentChar = enteredtext[a];

        if ( isdigit(currentChar) )
        {
            digitcounter++;
        }

    }

    printf("\nEncountered %d digits.\n", digitcounter);

    return 0;
}
