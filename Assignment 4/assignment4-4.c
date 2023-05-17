/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept three number and print its multiplication.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Input :         integer
//  Output :        integer
//  Description :   Write a program which Accept three number and print its multiplication.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int Multi =0;
    if(iNo1>0 && iNo2>0 && iNo3>0)
    {
        Multi = iNo1*iNo2*iNo3;
        return Multi; 
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter Three Number : ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of Three Number is %d",iRet);

    return 0;
}
