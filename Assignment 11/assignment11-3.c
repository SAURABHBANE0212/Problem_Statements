/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and accept one anothr Number as No, return index of last occurance of that NO
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)   
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize =0, iRet =0, iValue=0, iCnt =0;
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
    
    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is No such Number");
    }
    else
    {
        printf("Last Occurance of Number is %d",iRet);
    }

    free(p);

    return 0;
}