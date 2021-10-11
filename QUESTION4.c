#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//Dharani Pamidimukkala
//scholar id:2012137
void select_sort(long long int d[],long long int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(d[j]<d[i])
            {
                int temp=d[j];
                d[j]=d[i];
                d[i]=temp;
            }
        }
    }
    printf("Selection Sorted Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",d[i]);
    printf("\n");
    return;
}
void bubble_sort(long long int d[],long long int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(d[i]>d[i+1])
            {
                int temp=d[i];
                d[i]=d[i+1];
                d[i+1]=temp;
            }
        }
        counter++;
    }
    printf("Bubble Sorted Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",d[i]);
    printf("\n");
    return;
}
int main()
{
    printf("Enter no of elements:\n");
    long long int n;
    scanf("%d",&n);
    long long int d[n];
    for(int i=0;i<n;i++)
        d[i]=i;
    clock_t start,end;
    long int t;
    start=clock();
    select_sort(d,n);
    end=clock();
    t=end-start;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(d,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}
