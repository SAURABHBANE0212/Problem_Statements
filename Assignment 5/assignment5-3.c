/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and print its number line.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         integer 
//  Output :        void
//  Description :   Write a program which Accept number from user and print its number line.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt =0;

    for(iCnt= -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

// Time complexity : O(N)