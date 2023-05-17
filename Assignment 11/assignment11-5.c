/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and return product of all odd elements
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iMulti = iMulti*Arr[iCnt];
        }
        else
        {
            iMulti =0;
        }
    }
    return iMulti; 
    
    
}

int main()
{
    int iSize =0,iRet=0, iCnt =0;
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
    
    iRet = Product(p,iSize);

    printf("Product is : %d",iRet);

    free(p);

    return 0;
}