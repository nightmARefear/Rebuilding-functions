#include <stdio.h>
#include <strlen.h>
#include <strcmp.h>

int main()
{
    char name1[30], name2[30];

    printf("\n Please enter your name: ");
    fgets(name1, sizeof(name1), stdin);

    printf("\n Please enter your name: ");
    fgets(name2, sizeof(name2), stdin);

    // testing the functions
    if (strcmp(name1, name2) == 0)
        printf("\n The names are equal! \n");
    else if (strcmp(name1, name2) == -1)
        printf("\n The first name is bigger than the second! \n");
    else
        printf("\n The second name is bigger than the first! \n");

    return 0;
}
