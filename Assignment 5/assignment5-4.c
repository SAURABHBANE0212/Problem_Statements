/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept N from user and print all odd numbers up to N.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Input :         integer 
//  Output :        void
//  Description :   Write a program which Accept N from user and print all odd numbers up to N.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt =0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
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
    int iValue =0;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

// Time complexity : O(N)