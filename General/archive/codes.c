Playing With Characters

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char ch;
    char s[99];
    char sen[99];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c",sen);
    
    // error have to use buffer 99 fgets(sen,99,stdin);
    //error garbage value scanf("%[^\n]%*c",sen);
    //error  gets(sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
