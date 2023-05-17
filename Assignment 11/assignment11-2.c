/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and accept one anothr Number as No, return index of first occurance of that NO
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength , int iNo)
{
    int iCnt =0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    

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
    
    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is No such Number");
    }
    else
    {
        printf("First Iccurance of Number is %d",iRet);
    }

    free(p);

    return 0;
}