#include<stdio.h>
int main(void)
{
  int myarray[5];
  myarray[0]=10;
  myarray[1]=20;
  myarray[2]=30;
  myarray[3]=40;
  myarray[4]=50;
  // Declaration and initialisation
  int myarray_2[5] = {12,22,32,42,52};
  // The Compliler gets the size of the array by itself
  int myarray_3[] = {13,23,33,43,53,65,43};
  // Character array
  char mychar_array[] = "Hello";
  //Two - Dimesional Array
  int two[2][3]={{1,2,3}, {4,5,6}};
  // Getting the cout of elements, using the sizeof(<arry>) --> number of bytes
  // devided by sizeof(<datatype>)
  int size_of_array=sizeof(mychar_array);
  int count_of_elements=sizeof(mychar_array)/sizeof(char);

  printf("Display array 1 elements\n");
  for(int i=0; i<5;i++)
  {
    printf("Array element number %d = %d\n",i,myarray[i]);
  }

  printf("Display array 2 elements\n");
  for(int i=0; i<5;i++)
  {
    printf("Array element number %d = %d\n",i,myarray_2[i]);
  }

  // Display the two dimensional array
  printf("Display two dimenstional array:\n");
  for(int i=0;i<2;i++)
  {
    for(int k=0; k<3; k++)
    {
      printf("%d",two[i][k]);
    }
    printf("\n");
  }

  //Display the elements of char array
  printf("The number of elements of char array is: %ld\n",count_of_elements);
  for(int i=0; i < count_of_elements;i++)
  {
    printf("%c\n",mychar_array[i]);
  }
}
