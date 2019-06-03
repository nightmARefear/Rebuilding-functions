int isdigit(int target)
{
    if (target >= 0 && target <= 9)
        return 1;
    else
        return 0;
}

int isalpha(int target)
{
    if ((target >= 'a' && target <= 'z') || (target >= 'A' && target <= 'Z'))
        return 1;
    else
        return 0;
}

int isalnum(int target)
{
    if (isalpha(target) || isdigit(target))
        return 1;
    else
        return 0;
}

int islower(int target)
{
    if (target >= 'a' && target <= 'z')
        return 1;
    else
        return 0;
}

int isupper(int target)
{
    if (target >= 'A' && target <= 'Z')
        return 1;
    else
        return 0;
}

int isspace(int target)
{
    if (target == ' ')
        return 1;
    else
        return 0;
}

int ispunct(int target)
{
    if ((target >= 32 && target <= 47) || (target >= 48 && target <= 64) || (target >= 91 && target <= 96) || (target >= 123 && target <= 126))
        return 1;
    else
        return 0;
}

int iscntrl(int target)
{
    if (target >= 0 && target <= 31)
        return 1;
    else
        return 0;
}

int isprint(int target)
{
    if (!iscntrl(target))
        return 1; // printable (non control character)
    else
        return 0; // non printable (control character)
}

int toupper(int target)
{
    if (islower(target))
        target = target - ('A' - 'a'); // target = target + ('A' - 'a');
    return target;
}

int tolower(int target)
{
    if (isupper(target))
        target = target - ('a' - 'A');
    return target;
}