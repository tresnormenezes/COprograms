#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 100
int stack[15];
int top=-1;
void push(int x);
int pop();
void HexToBin();
void BinToHex();
//void HexToDec();
void main()
{
  int ch;
  do
  {
    printf("\n1: Hexadecimal to Binary\n2: Binary to Hexadecimal\n3: Hexadecimal to Decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: HexToBin();
              break;
      case 2: BinToHex();
              break;
      case 3: //HexToDec();
      default: printf("Error");
    }
  }while(ch);
}

void HexToBin()
{
   char binaryNumber[max],hexaDecimal[max];
   int d,r,i=0;
   printf("Enter any hexadecimal number: ");
   scanf("%s",hexaDecimal);
   printf("\nEquivalent binary value: ");
   while(hexaDecimal[i])
   {
      if('hexaDecimal[i]'>65&&'hexaDecimal[i]'<70)
      switch(hexaDecimal[i])
      {
         case 'A': printf("1010");
                   break;
         case 'B': printf("1011");
                   break;
         case 'C': printf("1100");
                   break;
         case 'D': printf("1101");
                   break;
         case 'F': printf("1111");
                   break;
      }
      else
      {
         d=hexaDecimal[i];
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

      i++;
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

void BinToHex()
{
   int hex[100],bin,i=1,j=0,rem,dec = 0;

   printf("Enter a Binary Number: ");
   scanf("%d",&bin);
   while(bin>0)
   {
      rem = bin % 2;
      dec = dec + (rem*i);
      i = i * 2;
      bin = bin / 10;
   }
   i = 0;
   while(dec!=0)
   {
      hex[i] = dec % 16;
      dec = dec/16;
      i++;
   }
   printf("Equivalent HexaDecimal value: ");
   for(j=i-1;j>=0;j--)
   {
      if(hex[j]>9)
        printf("%c",hex[j]+55);
      else
        printf("%d",hex[j]);
   }
}
