/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one Number and Check whether is Divisible by 5 or not
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         integer
//  Output :        boolean
//  Description :   Accept one Number and Check whether is Divisible by 5 or not
//  Author :        Saurabh Nathaji Bane
//  Date :          30/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    } 
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}