/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program to find factorial of given number.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Input :         integer
//  Output :        intger
//  Description :   Write a program to find factorial of given number.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt =0;
    int iResult = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        iResult = iResult*iCnt;
    }
    return iResult;
   
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d",iRet);

    return 0;
}

// Time complexity : O(N)