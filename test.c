/* tests the functions */
#include <stdio.h>
#include <stdlib.h> // for system command
#include "string2.h"
#include "ctype.h"

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif

int main()
{

    // test for string2.h library
    char name1[30], name2[30];

    printf("\n Please enter your name: ");
    fgets(name1, sizeof(name1), stdin);

    printf("\n Please enter your name: ");
    fgets(name2, sizeof(name2), stdin);

    // testing the functions
    if (strcmp2(name1, name2) == 0)
        printf("\n The names are equal! \n");
    else if (strcmp2(name1, name2) == -1)
        printf("\n The first name is bigger than the second! \n");
    else
        printf("\n The second name is bigger than the first! \n");

    strcpy2(name1, name2);
    printf("\n name1 (name1 = name2): %s \n", name1);

    char First_Name[30], Last_Name[30];

    printf("\n Enter your first and last name: \n");
    scanf("%s %s", First_Name, Last_Name);

    strcat2(First_Name, Last_Name);
    printf("\n Full name: %s \n", First_Name);

    // test for ctype.h library
    system("cls");

    char c, d;
    printf("\n Enter a non-capital and capital letter: \n");
    scanf(" %c %c", &c, &d);
    c = toupper(c);
    d = tolower(d);

    printf("\n The entered letter in uppercase form is: %c \n", c);
    printf("\n The entered letter in lowercase form is: %c \n", d);

    system("pause"); // pauses the terminal
    return EXIT_SUCCESS;
}
