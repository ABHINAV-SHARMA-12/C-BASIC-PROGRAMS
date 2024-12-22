#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER HOW MANY NUMBERS YOU WANTS TO ENTER = ");
    scanf("%d",&n);
    printf("ENTER %d NUMBERS BELOW\n",n);
    int a[n],min,i;
    for(i=0;i<n;i++)
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
        if(i>=3)
        {
            printf("ENTER %dth NUMBER = ",i+1);
        }
        scanf("%d",&a[i]);
    }
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf("THE MINIMUM OF ENTERED NUMBER = %d",min);
return 0;
}
