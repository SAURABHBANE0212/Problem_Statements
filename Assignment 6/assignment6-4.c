/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and display its table.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Input :         integer
//  Output :        intger
//  Description :   Write a program which Accept number from user and display its table.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Table(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt=1 ; iCnt<=10 ; iCnt++)
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

    Table(iValue);

    return 0;
}