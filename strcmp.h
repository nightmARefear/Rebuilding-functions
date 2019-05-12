int strcmp(unsigned const char *str1, unsigned const char *str2) // if str1 == str2 return 0, if str1 < str2 return 1, if str1 > str2 return -1
{
    int i = 0, counter = 0, counter1 = 0, counter2 = 0;

    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] == str2[i])
            counter++; // counter1++; counter2++;
        else if (str1[i] > str2[i])
            counter1++;
        else
            counter2++;
        i++;
    }

    if (counter == strlen(str1) && counter == strlen(str2)) // counter1 == counter2
        return 0;                                           // the strings are equal
    else if (counter1 > counter2)
        return -1; // the first string is bigger than the second
    else
        return 1; // the second string is bigger than the first
};
