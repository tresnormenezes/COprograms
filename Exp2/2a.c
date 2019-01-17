#include<stdio.h>
#include<math.h>
#include<string.h>
int stack[15];
int top=-1;
void push(int x);
int pop();
void HexToBin();
//void BinToHex();
//void HexToDec();
void main()
{
  int ch;
  do
  {
    printf("\n\n1: Hexadecimal to Binary\n2: Binary to Hexadecimal\n3: Hexadecimal to Decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: HexToBin();
              break;
      case 2: //BinToHex();
              break;
      case 3: //HexToDec();
      default: printf("Error");
    }
  }while(ch);
}

void HexToBin()
{
  int d,r,c,i=0,b=0;
  char hx[20];
  printf("Enter hexadecimal number: ");
  scanf("%s",&hx);
  printf("The binary equivalent is: ");

  while(hx[i]!='\0')
  {
    c=0;
    d=hx[i];
    while(d>0)
    {
     r=d%2;
     push(r);
     d=d/2;
     c++;
    }
    while(c<4)
    {
      push(0);
    }
    while(top>-1)
    {
     printf("%d",pop());
    }
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
/*
void BinToHex()
{
  int b,r,d=0,i=0;
  char hx[20];
  printf("Enter the binary number:");
  scanf("%d",&b);

  while(b>0)
  {
   r=b%10;
   if(r==1)
     d=pow(2,i)+d;
   i++;
   b=b/10;
  }



  printf("The hexadecimal equivalent is: ");
  printf("%s",hx);
}*/
