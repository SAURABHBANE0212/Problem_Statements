/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one Number from user and print that number of * on screen
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         integer
//  Output :        void
//  Description :   Accept one Number from user and print that number of * on screen
//  Author :        Saurabh Nathaji Bane
//  Date :          30/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    printf("Enter Number ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}