/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write program which accept number from user and return difference between summation of even digit and summation of odd digits
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEDigit =0;
    int iODigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit%2 == 0)
        {
            iEDigit = iDigit + iEDigit; 
        }
        else
        {
            iODigit = iDigit + iODigit;
        }
        iNo = iNo/10;
    }
    return iEDigit-iODigit;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}