/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept two Number from user and Display first number in second number of times
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         integer , integer
//  Output :        void
//  Description :   Accept two Number from user and Display first number in second number of times
//  Author :        Saurabh Nathaji Bane
//  Date :          30/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequancy)
{
    int i = 0;

    for(i=0;i<iFrequancy;i++)
    {
        printf("%d",iNo);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("ENter Number ");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}