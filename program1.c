//Write a program which accept number from user and print that number of even numbers on screen

#include<stdio.h>

void DisplayEvenNumbers(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = - iNo;

    }
    for(iCnt = 2; iCnt<iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEvenNumbers(iValue);

    return 0;
}