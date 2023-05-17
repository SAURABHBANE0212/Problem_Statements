/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : write a program which accept number from user and display its table in reverse order.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Input :         integer
//  Output :        void
//  Description :   write a program which accept number from user and display its table in reverse order.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int TableRev(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt=10 ; iCnt>=1 ; iCnt--)
    {
        iResult = iNo*iCnt;
        printf("%d\t",iResult);
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

    TableRev(iValue);

    return 0;
}