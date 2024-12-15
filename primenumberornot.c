#include<stdio.h>
int main()
{
     int a,flag=0,i;
    printf("ENTER THE POSITIVE NUMBER ");
    scanf("%d",&a);
    if(a==0 || a==1)
    {
        flag=1;
    }
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag =1;
           break;
        }
    }
 if(flag==0) 
 {
    printf("ENTER NUMBER %d IS PRIME NUMBER",a);
 }
 else
 {
    printf("ENTER NUMBER %d IS NOT PRIME NUMBER",a);
 }
return 0;
}