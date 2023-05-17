/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and display all such number which contain 3 digit in it
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[], int iLength)
{
    int iCnt =0;
    int iDigit =0;
    int iCounter =0;
    int iTemp =0;
    int iPos = -1;
    

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        
        iTemp = Arr[iCnt];
        while(iTemp != 0)
        {
            iTemp=iTemp/10;
            iCounter++;
            
        }
        if(iCounter==3)
        {
            printf("%d",Arr[iCnt]);
        }
        
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
    
    Digits(p,iSize);
    
    free(p);

    return 0;
}