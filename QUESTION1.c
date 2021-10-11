#include<stdio.h> 
//Dharani Pamidimukkala 
// Scholar id:2012137

int main()
{
    char jes[500];
    printf("Enter the value\n");
    scanf("%s",jes);
    int i=0;
    int d1=0,d2=0;
    while(jes[i]!='\0')
    {
        if(jes[i]=='.')
        {
            d1++;
            if(jes[i+1]!='\0')
            d2=1;
        }
        i++;
    }
    if(d1==1 && d2==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}
