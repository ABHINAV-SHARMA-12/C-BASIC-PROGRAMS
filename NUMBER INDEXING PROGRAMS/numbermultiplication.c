/*STORE THE NUMBERS BY INDEXING AND 
GETTING MULTIPLY OF THOSE NUMBER AS OUTPUT*/
#include<stdio.h>
int main()
{
    int a;
    printf("ENTER NUMBER HOW MANY NUMBERS YOU WANTS TO ENTER= ");
    scanf("%d",&a);
    int m[a],multi=1;
    printf("ENTER THE %d NUMBERS BELOW\n",a);
    for(int i=0;i<a;i++)
    {
         if(i==0)
        {
            printf("ENTER %dst NUMBER = ",i+1);
        }
        if(i==1)
        {
            printf("ENTER %dnd NUMBER = ",i+1);
        }
        if(i==2)
        {
            printf("ENTER %drd NUMBER = ",i+1);
        }
        if(i>2)   
        {
            printf("ENTER %dth NUMBER = ",i+1);
        }
        scanf("%d",&m[i]);
    }
    for(int i=0;i<a;i++)
    {
        multi=multi*m[i];
    }
int b=a-1;
int j=0;
while(j!=b)
{
   
       printf("%d * ",m[j]);
    j++;
}
printf("%d",m[b]);
printf("=");
printf(" %d",multi);

}
