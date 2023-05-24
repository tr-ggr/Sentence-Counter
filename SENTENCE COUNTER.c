#include<stdio.h>
#include<string.h>
#include<limits.h>

int main()
{
    
    printf("tr~gger's CRINGE sentence counter v1.0\n\n");
    int user = 1;

    while(user == 1)
    {

    char str[999999];
    int ctr = 0, ctr2 = 0;


    printf("Enter paragraph:\n\n");
    getchar();
    scanf("%[^\n]s", str);

    char * word = strdup(str);
    
    int len = strlen(str);

    char * tok = strtok(str, ".");

    while(tok != NULL)
    {
        ctr++;
        tok = strtok(NULL, ".");
    }

    tok = strtok(word, " ");

    while(tok != NULL)
    {
        ctr2++;
        tok = strtok(NULL, " ");
    }
  
    printf("\nSentence count: \t%d\n", ctr);
    printf("Char count: \t\t%d\n", len);
    printf("Word count: \t\t%d", ctr2);

    printf("\n\nContinue using? [ 0 - NO | 1 - YES ]: ");
    scanf("%d", &user);
    }


}