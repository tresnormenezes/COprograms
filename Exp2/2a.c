#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 100
int stack[15];
int top=-1;
void push(int x);
int pop();
void HexToBin();
void BinToHex();
void HexToDec();
void DecToHex();
char hex[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
void main()
{
  int ch;
  do
  {
    printf("\n1: Hexadecimal to Binary\n2: Binary to Hexadecimal\n3: Hexadecimal to Decimal\n4: Decimal to Hexadecimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: HexToBin();
              break;
      case 2: BinToHex();
              break;
      case 3: HexToDec();
              break;
      case 4: DecToHex();
              break;
      default: printf("Error");
    }
  }while(ch);
}

void HexToBin()
{
    char hexa[MAX];
    long int i = 0;
    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while(hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
}

void BinToHex()
{
    long int binary, hexadecimal=0, i=1, remainder;
    printf("Enter the binary number: ");
    scanf("%ld", &binary);
    while (binary!=0)
    {
        remainder=binary%10;
        hexadecimal=hexadecimal+remainder*i;
        i=i*2;
        binary=binary/10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimal);
}

void HexToDec()
{
    char hex[20];
    int decimal,i = 0, val, len;

    decimal = 0;

    printf("Enter any hexadecimal number: ");
    scanf("%s",&hex);

    len = strlen(hex);
    len--;

    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    printf("Decimal number = %d", decimal);
}

void DecToHex()
{
    int decimal;
    char hexadecimal[30], i, j, rem;
    printf("Enter the decimal value: ");
    scanf("%d",&decimal);

    for(i=0; decimal!=0; i++)
    {
        rem=decimal%16;
        hexadecimal[i]=hex[rem];
        decimal/=16;
    }
    printf("\nHexadecimal equivalent is ");
    for(j=i-1; j>=0; j--)
        printf("%c", hexadecimal[j]);
}
