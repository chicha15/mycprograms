#include<stdio.h>
main()
{
    char    str[100];
    int countdigits,countalphabet,countspecialchar,countspaces;
    int counter;
    countdigits=countalphabet=countspecialchar=countspaces=0;
    printf("enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countdigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countalphabet++;
        else if(str[counter]==' ')
            countspaces++;
        else
            countSpecialChar++;
    }
 
    printf("\ndigits: %d \nalphabets: %d \nspaces: %d \nspecial characters: %d",countdigits,countalphabet,countspecialchar,countspaces);
 
}