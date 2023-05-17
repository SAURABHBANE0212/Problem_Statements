/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and accept one anothr Number as No, return frequency of No from it 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength , int iNo)
{
    int iCnt =0;
    int iCounter =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iCounter++;
        }
    }
    return iCounter++;

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
    
    iRet = Frequency(p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}