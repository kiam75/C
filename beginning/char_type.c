# include <stdio.h>

int main(void)
{
  char mychar = 't', mychar2 = 97;

  printf("Display as Char. mychar: %c, mychar2: %c \n",mychar,mychar2);
  printf("Display as int. mychar: %d, mychar2: %d \n",mychar,mychar2);
  printf("The sizes of mychar = %zi, mychar2: %zu \n",sizeof(mychar),sizeof(mychar2));

}
