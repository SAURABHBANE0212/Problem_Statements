
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iRow;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t"); 
            }
        }
        printf("\n");
        printf("\n");
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