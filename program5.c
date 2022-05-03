//Accept one charecter from user and check wheter that charecter is vowel or not?
//Input : E output: true. Inpur: w output : false

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    if((cValue!="a") ||(cValue!="e") || (cValue!="i") || (cValue!="o") || (cValue!="u") )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    char cValue = "\0";
    bool bRet = false;

    printf("Enter charecter::\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}