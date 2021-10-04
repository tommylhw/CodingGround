#include <stdio.h>
#include <stdlib.h>

int main() {

  char input[10000];
  int num[10000];

  int i = 0;
  int meanCal(int num[], int i);

  printf("Enter a number to append to the number set. Enter '/' to stop appending.\n");

  while (1) {
    scanf("%s", input);

    /*-- check if entered '/' --*/
    if (input[0] == '/') {
      printf("stop\n");
      break;
    } else {
      /*-- save the input into num array --*/
      int temp;
      temp = atoi(input);

      num[i] = temp;
      printf("The %d of data is: %d\n", i, num[i]);
      i++;
    }

    printf("The length of set: %d\n", i);
  }

  printf("The total number of data: %d\n", i);

  // printf("The data set:\n");
  // for (int j = 0; j < i; ++j) {
  //   printf("%d", num[j]);
  //   printf(", ");
  // }

  /*-- calculate the mean --*/
  meanCal(num, i);
  

  return 0;
}


int meanCal(int data[], int length) {
  int sum = 0; 
  float mean = 0;   
  
  printf("The length of data set: %d\n", length); /*-- dislay the length --*/

  printf("The data set: "); /*-- display the data set --*/
  for (int j = 0; j < length; j++) {
    printf("%d", data[j]);
    printf(", ");

    sum = sum + data[j]; /*-- cal the sum --*/
  }

  printf("\nThe sum of data set: %d", sum);
  mean = sum / length; /*-- cal the mean --*/
  printf("The mean is: %.2f", mean);

  




  return 0;
}