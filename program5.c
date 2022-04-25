//Accept number from user and check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{

    if(iNo<0)
    {
        iNo = - iNo;
    }
    if(iNo%2==0)
    {
        return true;
    }
    if(iNo%2!=0)
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    return 0 ;
}