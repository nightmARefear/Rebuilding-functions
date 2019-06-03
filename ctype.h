int isdigit(unsigned const char target)
{
    if (target >= 0 && target <= 9)
        return 1;
    else
        return 0;
}

int isalpha(unsigned const char target)
{
    if ((target >= 'a' && target <= 'z') || (target >= 'A' && target <= 'Z'))
        return 1;
    else
        return 0;
}

int isdigit(unsigned const char target)
{
    if (target >= 0 && target <= 9)
        return 1;
    else
        return 0;
}

int isalnum(unsigned const char target)
{
    if (isalpha(target) || isdigit(target))
        return 1;
    else
        return 0;
}

int islower(unsigned const char target)
{
    if (target >= 'a' && target <= 'z')
        return 1;
    else 
        return 0;    
}

int isupper(unsigned const char target)
{
    if (target >= 'A' && target <= 'Z')
        return 1;
    else 
        return 0;    
}