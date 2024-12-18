#include<stdio.h>
int main()
{
    int a;
    printf("ENTER NUMBER HOW MANY NUMBERS YOU WANTS TO ENTER = ");
    scanf("%d",&a);
    int n[a],max;
    printf("ENTER %d NUMBERS BELOW\n",a);
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
        scanf("%d",&n[i]);
    }
    max=n[0];
    for(int i=0;i<a;i++)
    {
        if(n[i]>max)
        {
            max= n[i];
        }
    }
    printf("THE MAXIMUM OF ENTERED NUMBER = %d",max);
return 0;
}
