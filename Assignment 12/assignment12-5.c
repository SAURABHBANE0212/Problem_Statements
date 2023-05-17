/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and Display summation of each Number
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void DigitsSum(int Arr[], int iLength)
{
    int iCnt =0;
    int iDigit =0;
    int iSum =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        while(Arr[iCnt]!=0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iDigit+iSum;
            Arr[iCnt]=Arr[iCnt]/10;
            
        }
        printf("%d\t",iSum);
        iSum=0;        
    }
    
}

int main()
{
    int iSize =0, iCnt =0;
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
    
    DigitsSum(p,iSize);
    
    free(p);

    return 0;
}