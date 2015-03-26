#include <stdio.h>

int main(void)
{
  int array[8] = {82, 28, 38, 48, 27, 47, 89, 56};
  int max, max_2, i;
  
  max = array[0];
  max_2 = array[0];
  for (i = 0; i < 8; i++) {
    if (max < array[i]) {
      max_2 = max;
      max = array[i];
    }
  }
  
  printf("The Max number is %d\n", max);
  printf("The Second Max number is %d\n", max_2);
  
  return 0;
}
