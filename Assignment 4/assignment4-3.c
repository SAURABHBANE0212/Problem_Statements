/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept two number from user and check whether number are equal or not.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept two number from user and check whether number are equal or not.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Two Number : ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == 1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    
    return 0;
}
