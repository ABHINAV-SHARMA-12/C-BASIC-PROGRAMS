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
        scanf("%d",&m[i]);
    }
    for(int i=0;i<a;i++)
    {
        multi=multi*m[i];
    }
int b=a;
int j=0;
while(m[j]!=m[b])
{

    printf("%d * ",m[j]);
    j++;
}
printf("=");
printf(" %d",multi);

}