/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and return frequency of even numbers
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int  CountEven(int Arr[], int iLength)
{
    int iCnt =0;
    int iCounter =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCounter++;
        }
    }
    return iCounter++;

}

int main()
{
    int iSize =0, iRet =0, iCnt =0;
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
    
    iRet = CountEven(p,iSize);

    printf("Result is : %d",iRet);

    free(p);

    return 0;
}