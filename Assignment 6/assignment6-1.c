/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which Accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Input :         integer
//  Output :        void
//  Description :   Write a program which Accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if((iNo>50) && (iNo<100))
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Large");
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

    Number(iValue);

    return 0;
}