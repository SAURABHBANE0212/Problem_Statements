/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept single digit number from user and print it into word.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Input :         integer
//  Output :        void
//  Description :   Accept single digit number from user and print it into word.
//  Author :        Saurabh Nathaji Bane
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
          case 0:
               printf("ZERO");
               break;
          case 1:
               printf("ONE");
               break;
          case 2:
               printf("TWO");
               break;
          case 3:
               printf("THREE");
               break;
          case 4:
               printf("FOUR");
               break;
          case 5:
               printf("FIVE");
               break;
          case 6:
               printf("SIX");
               break;
          case 7:
               printf("SEVEN");
               break;
          case 8:
               printf("EIGHT");
               break;
          case 9:
               printf("NINE");
               break;
          default:
               printf("Invalide Number"); 
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