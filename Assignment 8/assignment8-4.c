/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write program which accept number from user and return multiplication of all digit
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit>0)
        {
            iMulti = iDigit*iMulti; 
        }
        iNo = iNo/10;
    }
    return iMulti;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}