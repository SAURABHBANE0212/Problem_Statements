/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N number from user and display all such elements which are divisible by 3 and  divisible by 5
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(((Arr[iCnt]%3)==0) && ((Arr[iCnt]%5)==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

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
    Display(p,iSize);

    free(p);

    return 0;
}