#include<stdio.h>
//Dharani Pamidimukkala
//scholar id:2012137
int main()
{
    char jes[1000];
    scanf("%s",jes);
    int i=0;
    int ch=0;
    int count=0;
    int idx1=-1,idx2=-1;
    while(jes[i]!='\0')
    {
        if((jes[i]>='A' && jes[i]<='Z') || (jes[i]>='a' && jes[i]<='z') || (jes[i]>='0' && jes[i]<='9'))
            ch=1;
        else if((jes[i]=='.' || jes[i]=='-'  || jes[i]=='_' || jes[i]=='@') && (i!=0 && jes[i+1]!='\0'))
            ch=1;
        else
        {
            ch=-1;
            break;
        }
        if(jes[i]=='@')
        {
            count++;
            idx1=i;
        }
        if(count>1)
        {
            ch=-1;
            break;
        }
        if(jes[i]=='.')
        {
            idx2=i;
        }
        i++;
    }
    if(idx2-idx1<2)
        ch=-1;
    if(ch==1)
        printf("Valid address of the Email\n");
    else
        printf("Invalid address of the Email\n");
}
