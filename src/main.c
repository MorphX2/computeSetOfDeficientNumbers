#include<stdio.h>
#include<stdlib.h>

void computeSet(int integerInput) {
  int sum = 0;
  for (int x = 1; x < integerInput; x++) {
    if ( integerInput % x == 0 ) {
      sum = sum + x;
    }
  }
  if ( sum < integerInput ) {
    printf(" %d", integerInput);
  }
}

int main() {
  int setSize;
  int counter;

  printf("Please enter a set size:");
  scanf("%d", &setSize);
  printf("Printing deficient numbers between 1 and %d ...\n", setSize);
  printf("{");
  for (counter = 1; counter <= setSize; counter++) {
     computeSet(counter);
  }
  counter = counter + 1;
  printf(" }");
}




