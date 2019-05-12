int strlen(unsigned const char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;
    return length; // returns the TRUE size of the string
};
