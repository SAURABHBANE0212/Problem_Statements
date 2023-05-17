/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write program which accept number from user and check whether it contain 0 in it or not
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo/10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("ENter Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contain Zero");
    }
    else
    {
        printf("There is No Zero");
    }

    return 0;
}