# include <stdio.h>

int main(void)
{
  // floats are 4 bytes of size
  float f1 =  123.3456f; //Suffif f or F makes it of fload type
  float fe1 = 123456e-3f; // the same as f1 but exponentionl presentation used

  //decimals are  8 bytes wide
  double d1 = 123.456;
  double de1 = 123456e-3;
  long double ld = 122345.34456l;

  printf("Value of fload f1: %f \n",f1);
  printf("Value of fload f1 with precision of 3: %.3f \n",f1);
  printf("Value of fload fe1 (exponential representation): %f \n",fe1);
  printf("Value of long double ld : %.Lf \n",ld);
}

