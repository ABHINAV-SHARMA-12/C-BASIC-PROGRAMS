//BY ABHINAV
#include<stdio.h>
void operations(int a,int b,int *add,int *sub,int *mul,float *divide)
{
    *add= a+b;
    *sub=a-b;
    *mul=a*b;
   
}
int main()
{
    int a,b,add,sub,mul;
    float divide;
    //printf("ENTER FIRST NUMBERS = ");
   int i=0;

        printf("ENTER %dst NUMBERS = ",i+1);
        scanf("%d",&a);
        printf("ENTER %dnd NUMBERS = ",i+2);
        scanf("%d",&b);
        printf("\n");
  
    
    float c=a;
    float d=b;
    divide=c/d;
    operations(a,b,&add,&sub,&mul,&divide);
    printf("THE ADDITION OF %d+%d = %d\nTHE SUBTRACTIION OF %d-%d = %d\nTHE MULTIPLICATION OF %d*%d = %d\nTHE DIVIDE OF %f/%f = %f\n",a,b,add,a,b,sub,a,b,mul,c,d,divide);

  
    
    return 0;
}