//Write a program which accept number from user and display its multiplication of factors
//input: 12 output: 144

#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul;
    if(iNo<0)
    {
        iNo = - iNo;

    }   
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    } 
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number");
    scanf("%d", & iValue);

    iRet = MulFact(iValue);
    printf("%d",iRet);
    return 0;

}