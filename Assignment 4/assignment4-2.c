/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept one number from user and check whether that number is greater than 100 or not.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept one number from user and check whether that number is greater than 100 or not.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet==1)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    return 0;
}
