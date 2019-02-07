#include<stdio.h>
void addition();
void subtraction();
int main()
{
 int n;
 printf("1-Addition\n2-Subtraction: ");
 scanf("%d",&n);
 switch(n)
 {
  case 1 : addition();
           break;
  case 2 : subtraction();
           break;
  default : printf("\nError\n");

}
}

void addition()
{
   int num1,num2,dummy1,dummy2,k,i=7,f,a,b,c;
   int add[]={0,0,0,0,0,0,0,0};
   printf("Enter the binary numbers:\n ");
   printf("First number : ");
   scanf("%d",&num1);
   printf("\nSecond number : ");
   scanf("%d",&num2);

   dummy1=num1;
   dummy2=num2;
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
      for(i=0;i<8;i++)
      {
          printf("%d ",add[i]);
      }
}

void subtraction()
{
    int num1,num2,dummy1,dummy2;
    int i=7,j=7,k=8,f;
    int a,b,c;
    int sub[]={0,0,0,0,0,0,0,0},v[]={0,0,0,0,0,0,0,0},p[]={1,1,1,1,1,1,1,1};
    printf("Enter the binary numbers which you want to subtract\n");
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("\nEnter the second number : ");
    scanf("%d",&num2);
    dummy1=num1;
    dummy2=num2;
    printf("\nERROR IN 1");
    while(dummy1!=0)
    {
       printf("\nERROR IN 2");
       a=dummy1%10;
       v[i]=a;
       i=i-1;
       dummy1=dummy1/10;
    }
    while(dummy2!=0)
    {
       printf("\nERROR IN 3 ");
       b=dummy2%10;
    if(b==1)
    {
       p[j]=b;
       i=i-1;
       dummy2=dummy2/10;
    while(dummy2!=0)
    {
       printf("\nERROR IN 4");
       a=dummy2%10;
       if(a==0)
       {
          p[j]=1;
          i=i-1;
          dummy2=dummy2/10;
       }
       if(a==1)
       {
          p[j]=0;
          i=i-1;
       dummy2=dummy2/10;
       }
    }
 }
    printf("\nERROR what");
    p[j]=b;
    i=i-1;
    dummy2=dummy2/10;
    }

    dummy1=num1;
    dummy2=num2;
    c=0;
    printf("\nERROR IN SUBTRACTION");
    while((dummy1!=0)&&(dummy2!=0)||i>0)
    {
       i=7,j=7,k=7;
       a=v[k];
       b=p[j];
       f=a+b+c;
       switch(f)
       {
          case 0 : sub[i]=f;
                   c=0;
                   i=i-1;
                   break;
          case 1 : sub[i]=f;
                   c=0;
                   i=i-1;
                   break;
          case 2 : sub[i]=0;
                   c=1;
                   i=i-1;
                   break;
          case 3 : sub[i]=1;
                   c=1;
                   i=i-1;
                   break;
     }
     k=k-1;
     j=j-1;
     dummy1=dummy1/10;
     dummy2=dummy2/10;
}

   for(i=0;i<8;i++)
   {
      printf("%d",sub[i]);
   }
}
