/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and print that number of $ & * on screen .
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Input :         integer 
//  Output :        void
//  Description :   Write a program which Accept number from user and print that number of $ & * on screen.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
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