
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==1)
            {
                printf("%d\t",j);
            }
            else if(i==2)
            {
                printf("%d\t",j+1);
            }
            else if(i==3)
            {
                printf("%d\t",j+2);
            }
            else 
            {
                printf("%d\t",j+3);
            }
           
        }
        printf("\n");
    }
   
}

int main()
{
    int iValue1 =0,iValue2=0;

    printf("Enter Number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}