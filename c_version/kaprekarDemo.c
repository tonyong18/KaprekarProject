#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {
int isKaprekar(int n);
  
  if(argc != 2); {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  if(isKaprekar(n)) {
    printf("%d is a Kaprekar Number!\n", n);
  } else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
