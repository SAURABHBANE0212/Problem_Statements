/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user check whether that Number contains 11 in it or Not
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt =0;


    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}

int main()
{
    int iSize =0, iCnt =0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter Number of Element : ");
    scanf("%d",&iSize);

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
    
    bRet = Check(p,iSize);

    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is Not present");
    }
    

    free(p);

    return 0;
}