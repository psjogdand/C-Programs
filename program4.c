//Accept the charecter from user and convert case of that charecter
#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{  
    if(isalpha(cValue))
    {
        cValue = tolower(cValue);
        printf("%c",cValue);
    }
    else if(isalpha(cValue))
    {
        cValue = toupper(cValue);
        printf("%c",cValue);
    }

}
int main()
{
    char cValue;
    printf("Enter charecter\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}