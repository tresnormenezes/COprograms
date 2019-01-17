#include<stdio.h>
int stack[15];
int top=-1;
void push(int x);
int pop();
void dtb();
void btd();
void main()
{
  int ch;
  do
  {
    printf("\n\n1: Decimal to Binary \n2: Binary to Decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: dtb();
              break;
      case 2: btd();
              break;
      default: printf("Error");
    }
  }while(ch);
}

void dtb()
{
  int d,r,b=0,flag=0;
  printf("Enter signed decimal number: ");
  scanf("%d",&d);
  if(d<0)
  {
    flag=1;
    d=d*-1;
  }
  printf("The binary equivalent is: ");
  if(flag==1)
  printf("1");
  else
  printf("0");
  while(d>0)
  {
   r=d%2;
   push(r);
   d=d/2;
  }

  while(top>-1)
  {
   printf("%d",pop());
  }
}

void push(int x)
{
   stack[++top]=x;
}
int pop()
{
   return stack[top--];
}

void btd()
{
  int b,r,d=0,i=0;
  printf("Enter the unsigned binary number:");
  scanf("%d",&b);
  printf("The decimal equivalent is: ");
  while(b>0)
  {
   r=b%10;
   if(r==1)
     d=pow(2,i)+d;
   i++;
   b=b/10;
  }
  printf("%d",d);
}
