/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and return the smallest Number
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iLength)
{
    int iCnt =0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return (iMax-iMin);
    

}

int main()
{
    int iSize =0, iCnt =0;
    int iRet = 0;
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
    
    iRet = Difference(p,iSize);

    printf("Difference is %d",iRet);
    
    free(p);

    return 0;
}