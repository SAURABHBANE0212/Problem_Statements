/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept total marks and obtained marks from user and calculate percentage.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Input :         integer , float
//  Output :        float
//  Description :   Write a program which Accept total marks and obtained marks from user and calculate percentage.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, float iNo2)
{
    float fResult = 0.0 ;

    if(iNo1 <= 0)
    {
        printf("Please Enter Correct Total Marks");
        exit(0);
    }
    fResult = (iNo2/iNo1)*100;
    return fResult; 
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter total Marks : ");
    scanf("%d",&iValue1);

    printf("Enter obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.2f%%",fRet);

    return 0;
}
