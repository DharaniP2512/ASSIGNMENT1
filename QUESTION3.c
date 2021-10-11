#include<stdio.h>
//Dharani Pamidimukkala
//scholar id:2012137
int main()
{
    int d,a;
    printf("Enter the order of 2D matrix \n");
    scanf("%d %d",&d,&a);
    int jes[d][a];
    printf("Enter the 2D array\n");
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<a;j++)
            scanf("%d",&jes[i][j]);
    }
    int n=d*a;
    int b[n];
    int k=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<a;j++)
            printf("%d ",jes[i][j]);
        printf("\n");
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<a;j++)
        {
            b[k]=jes[i][j];
            k++;
        }
    }
    printf("\n Final 1D Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}
