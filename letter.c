
#include <stdio.h>
 main()
{
    char c
    int issmallvowel,iscapitalvowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
   issmallvowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    iscapitalvowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (issmallvowel || iscapitalvowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
   
}