#include<stdio.h>
void addtion();
void subtraction();
int main()
{
 int n;
 printf("WELCOME TO BINARY ARITHMETICS\n");
 printf("ENTER\n1)FOR ADDITION\n2)FOR SUBTRACTION\n");
 scanf("%d",&n);
 switch(n)
 {
  case 1 : addition();
           break;
  case 2 : subtraction();
           break;
  default : printf("\nENTER A VALID OPTION\n");

}
}

void addition()
{
 int num1,num2,dumy1,dumy2;
 int k,i=7,f;
 int a,b,c;
 int add[]={0,0,0,0,0,0,0,0};
 printf("Enter the binary numbers which you want to add\n");
 printf("Enter the first number : ");
 scanf("%d",&num1);
 printf("\nEnter the second number : ");
 scanf("%d",&num2);

 dumy1=num1;
 dumy2=num2;
 c=0;
 while((dumy1!=0)&&(dumy2!=0)||i>0)
  {
  a=dumy1%10;
  b=dumy2%10;
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
 dumy1=dumy1/10;
 dumy2=dumy2/10;
  }
  printf("\n");
 for(i=0;i<8;i++)
  {
  printf("%d ",add[i]);
  }
}

void subtraction()
{
 int num1,num2,dumy1,dumy2;
 int i=7,j=7,k=8,f;
 int a,b,c;
 int sub[]={0,0,0,0,0,0,0,0},v[]={0,0,0,0,0,0,0,0},p[]={1,1,1,1,1,1,1,1};
 printf("Enter the binary numbers which you want to subtract\n");
 printf("Enter the first number : ");
 scanf("%d",&num1);
 printf("\nEnter the second number : ");
 scanf("%d",&num2);
 dumy1=num1;
 dumy2=num2;
  printf("\nERROR IN 1");
 while(dumy1!=0)
 {
   printf("\nERROR IN 2");
  a=dumy1%10;
  v[i]=a;
  i=i-1;
  dumy1=dumy1/10;
 }
 while(dumy2!=0)
 {
   printf("\nERROR IN 3 ");
 b=dumy2%10;
 if(b==1)
 {
 p[j]=b;
 i=i-1;
 dumy2=dumy2/10;
 while(dumy2!=0)
 {
   printf("\nERROR IN 4");
 a=dumy2%10;
 if(a==0)
 {
  p[j]=1;
 i=i-1;
 dumy2=dumy2/10;
 }
 if(a==1)
 {
  p[j]=0;
 i=i-1;
 dumy2=dumy2/10;
 }

 }
 }
  printf("\nERROR what");
 p[j]=b;
 i=i-1;
 dumy2=dumy2/10;
 }

 dumy1=num1;
 dumy2=num2;
 c=0;
 printf("\nERROR IN SUBTRACTION");
 while((dumy1!=0)&&(dumy2!=0)||i>0)
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
 dumy1=dumy1/10;
 dumy2=dumy2/10;
  }

for(i=0;i<8;i++)
{
printf("%d",sub[i]);
}
}
