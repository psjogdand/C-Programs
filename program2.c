//Write a program whcich accept number from user   and display its factor in decresing order 
//input: 12 output: 6 4 3 2 1

#include<stdio.h>
void FactRev(int iNo)
{   
    int iCnt = 0;
    int iTemp = 0;
    int iSum = 0;
    int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {   
            for(iTemp = iNo; iNo!=0; iNo = iNo/10)
            {
                iRev = iNo%10;
                iSum = iSum*10+iRev;
            }
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}