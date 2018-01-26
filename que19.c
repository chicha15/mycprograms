#include <stdio.h>
 main()
{
    char s[1000], i;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++);

    printf("Length of string: %d", i);
}