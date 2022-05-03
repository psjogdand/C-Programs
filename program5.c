//Write a program which accepts numbers from user and return diference between summation of all its factors and non factors number
// Input : 12 Output: -34 (16-50)

#include<stdio.h>

int FactDif(int iNo)
{
    int iCnt = 0;
    int iNonFactSum = 0;
    int iFactSum = 0;
    int iFactDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
            
        }
        else if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
            
        }

    }
    iFactDiff = iFactSum-iNonFactSum;
    return iFactDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);


    iRet = FactDif(iValue);
    printf("%d",iRet);
    return 0;

}

// Time Complexity : O(N)
