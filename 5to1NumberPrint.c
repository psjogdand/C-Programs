//Assignment1:Program3) Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    int iStart = 5;
    int iMax = 5;
    for(iMax; iMax>=iStart; iStart--)
    {
        printf("%d",iStart);
    } 


}
int main()
{
    Display();

    return 0;
}