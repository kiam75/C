# include <stdio.h>

int main (void)
{
  int x = 10; // decimal constant
  int y = 012; // octal constant
  int z = 0xA; // hexadecimal constant
  unsigned a = 123456789u; // unsigned int value
  short b = 1234; // uses only two bytes
  long c = 123456789l; // uses at least 4 bytes
  long long d =123456789984756ll; // whith c99 integer type came with at least of 8 bytes long
  unsigned long long ud =123456789984756llu; // whith c99 integer type came with at least of 8 bytes long

 // using format specifier to represent the same value in different
 // representations
  printf("Value of x (Decimal): %d \n",x);
  printf("Value of y (Oktal): %o \n",x);
  printf("Value of z (Hexadecimal): %X \n",x);
  printf("Value of signed int b: %u \n",b);
  printf("Value of unsigned int a: %u \n",a);
  printf("Value of short int b: %d \n",b);
  printf("Value of long int c: %ld \n",c);
  printf("Value of long long int d: %lld \n",d);
  printf("Value of  unsigned long long int ud: %llu \n",ud);
}
