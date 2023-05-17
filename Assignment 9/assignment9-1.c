/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and return difference between summation of Even elements and summation of odd elements
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt =0;
    int iESum =0;
    int iOSum =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iESum = iESum + Arr[iCnt];
        }
        if((Arr[iCnt]%2)!=0)
        {
            iOSum = iOSum + Arr[iCnt];
        }
    }
    return iESum-iOSum;

}

int main()
{
    int iSize =0, iRet = 0, iCnt =0;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is : %d",iRet);

    free(p);

    return 0;
}