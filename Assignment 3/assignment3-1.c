/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and display its multiplication of factors.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept number from user and display its multiplication of factors.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iResult = iResult * iCnt;
        }
    }
    return iResult;

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

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}

// Time complexity : O(N/2)