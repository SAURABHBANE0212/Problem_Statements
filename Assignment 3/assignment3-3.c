/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and display all its non factors.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Input :         integer
//  Output :        void
//  Description :   Write a program which Accept number from user and display all its non factors.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            printf("%d\t",iCnt);
        }
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

// Time complexity : O(N)