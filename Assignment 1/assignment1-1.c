/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Program To Divide Two Number
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Input :         integer,integer
//  Output :        integer
//  Description :   Performs Division of 2 numbers
//  Author :        Saurabh Nathaji Bane
//  Date :          30/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;

}