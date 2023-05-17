/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and accept one anothr Number as No, Check whether No is present or Not
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength , int iNo)
{
    int iCnt =0;
    BOOL iFlage = FALSE;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iFlage = TRUE;
            break;
        }
    }
    return iFlage;
    

}

int main()
{
    int iSize =0, iValue=0, iCnt =0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter Number of Element : ");
    scanf("%d",&iSize);

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p== NULL)
    {
        printf("Uable to allocate the memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is Not Present");
    }

    free(p);

    return 0;
}