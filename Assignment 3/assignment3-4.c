/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and return summation of all its non factors.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SUmNonFact
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept number from user and return summation of all its non factors.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
    
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}

// Time complexity : O(N)