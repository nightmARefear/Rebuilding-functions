/* tests the functions */
#include <stdio.h>
#include "string2.h"

int main()
{
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
	printf("\n name1 = %s \n", name1);

	char First_Name[30], Last_Name[30];

	printf("\n Enter your first and last name: \n");
	scanf("%s %s", First_Name, Last_Name);

	strcat2(First_Name, Last_Name);

	printf("\n Full name: %s \n", First_Name);

	system("pause"); // pauses the terminal
    return 0;
}
