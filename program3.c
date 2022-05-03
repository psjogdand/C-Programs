//Write a program to accept number from user and display all its non factors.
//input 12 output: 5 7 8 9 11

#include<stdio.h>

void CheckNonFactor(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckNonFactor(iValue);

    return 0;

}

// Time Complexity : O(N)