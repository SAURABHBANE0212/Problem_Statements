/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and display its  factors in decreasing order.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input :         integer
//  Output :        void
//  Description :   Write a program which Accept number from user and display its  factors in decreasing order.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt =0;

    for(iCnt = (iNo/2) ; iCnt>=1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}

// Time complexity : O(N/2)