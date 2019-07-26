unsigned int strlen2(const char *str) // renamed to strlen2 because of instrinsic function error
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;
	return length; // returns the TRUE size of the string
}

// renamed to strcmp2 because of instrinsic function error
int strcmp2(const char *str1, const char *str2) // if str1 == str2 return 0, if str1 < str2 return 1, if str1 > str2 return -1
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

	if (counter == strlen2(str1) && counter == strlen2(str2)) // counter1 == counter2
		return 0;											  // the strings are equal
	else if (counter1 > counter2)
		return -1; // the first string is bigger than the second
	else
		return 1; // the second string is bigger than the first
}

char *strcpy2(char *dest, const char *src)
{
	return memcpy(dest, src, strlen(src) + 1);
}

char *strcat2(char *target, const char *source)
{
	int strlenT = strlen2(target); // used for comparison (1), and element copying (2)
	int sizeT = sizeof(target);	// size of the target string. Used for placing elements from the source string to the target (3)
	int strlenS = strlen2(source);
	int i;

	if ((sizeT - strlenT - 1) >= strlenS) // <===== (1) source string can fit in target string, thus we copy all of it
	{
		for (i = 0; i < strlenS; i++) // arrays start at 0
		{
			/* strlenT = length of the target string + i + 1. 
			 * The "1" is because the arrays start from 0 and therefore 
			 * if we didn't add "+1" we would replace the last element of 
			 * the target array with the first of the source
			 */
			target[strlenT + i] = source[i]; // <===== (2)
		}
	}
	else // the source string does not fit in the target string thus we copy as much as we can
	{
		for (i = 0; i < sizeT - strlenT - 1; i++)
			target[strlenT + i + 1] = source[i]; /* <====== (3) sizeT - strlenT because the target 
			                           /* string can hold up to sizeof(target)-1 elements but it 
									    * already has strlen2(target) elements so we deduct the actual
									    * size of the string from the max size - 1 
										* (last element of an array of characters is the NULL character)
									    */
	}

	return target;
}

char *strchr2(const char *str, int c)
{
	int pos, i;
	int isFound = 0; // 0 = false, 1 = true

	while (isFound == 0 && i <= strlen2(str))
	{
		if (strcmp2(str[i], c) == 0)
		{
			isFound = 1;
			pos = i;
			return pos;
		}
	}
}