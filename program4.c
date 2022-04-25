//Accept two numbers from user and display first number in second number of times.
#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    iNo = 0;
    for(iNo=0;iNo<iFrequency;iNo++)
    {
        printf("%d",&iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter requency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}