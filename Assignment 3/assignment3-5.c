/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and return difference between summation of all its factors and non factos.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept number from user and return difference between summation of all its factors and non factos .
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt =0;
    int iFactSum = 0;
    int iNonFactSum =0;
    int iSumDiff = 0;

    for (iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }
    return iSumDiff = iFactSum - iNonFactSum;
    
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

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}

// Time complexity : O(N)