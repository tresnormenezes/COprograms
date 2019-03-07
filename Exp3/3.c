#include<stdio.h>
int addition(int , int);
void subtraction(int, int);
int main()
{
 int n,num1,num2,i,p;
 printf("1-Addition\n2-Subtraction: ");
 scanf("%d",&n);
 switch(n)
 {
  case 1 :  printf("Enter the binary numbers:\n ");
            printf("First number : ");
            scanf("%d",&num1);
            printf("\nSecond number : ");
            scanf("%d",&num2);
            p=addition(num1,num2);
            printf("The addition is: %d", p);
            break;
  case 2 :  printf("Enter the binary numbers:\n ");
            printf("First number : ");
            scanf("%d",&num1);
            printf("\nSecond number : ");
            scanf("%d",&num2);
            subtraction(num1,num2);
            break;
  default : printf("\nError\n");

}
}

int addition(int n1, int n2)
{
   int dummy1,dummy2,k,f,a,b,c,j,t=0,i=7;
   static int add[]={0,0,0,0,0,0,0,0};

   dummy1=n1;
   dummy2=n2;
   c=0;
   while((dummy1!=0)&&(dummy2!=0)||i>0)
   {
      a=dummy1%10;
      b=dummy2%10;
      f=a+b+c;
      switch(f)
      {
         case 0 : add[i]=f;
                  c=0;
                  i=i-1;
                  break;
         case 1 : add[i]=f;
                  c=0;
                  i=i-1;
                  break;
         case 2 : add[i]=0;
                  c=1;
                  i=i-1;
                  break;
         case 3 : add[i]=1;
                  c=1;
                  i=i-1;
                  break;
      }
      dummy1=dummy1/10;
      dummy2=dummy2/10;
}
      printf("\n");
      for(j=0;j<8;j++)
      {
        t=t*10+add[j];
      }
      return t;
}

void subtraction(int n1, int n2)
{
    int dummy1,dummy2,dummy4,ans,temp,j,i=8;
    int dummy3[]={0,0,0,0,0,0,0,0};
    dummy1=n1;
    dummy2=n2;

    while(dummy2>0)
    {
        i--;
        temp=dummy2%10;
        dummy2=dummy2/10;
        dummy3[i]=temp;
    }

    for(i=0;i<8;i++)
    {
        if(dummy3[i]==0)
        dummy3[i]=1;
        else
        dummy3[i]=0;
    }

    for(j=0;j<8;j++)
    {
        temp=temp*10+dummy3[j];
    }

    dummy4=addition(temp,1);

    ans=addition(dummy1,dummy4);

    printf("The subtraction is: %d",ans);
}
