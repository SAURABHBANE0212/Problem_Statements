/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept  Number from user and check whether number is even or Odd
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Input :         integer
//  Output :        bolean
//  Description :   Accept  Number from user and check whether number is even or Odd
//  Author :        Saurabh Nathaji Bane
//  Date :          30/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
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

    printf("ENter Number ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet==1)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
   
}