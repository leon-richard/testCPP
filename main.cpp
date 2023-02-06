#include <cstdio>
#include <stdio.h>
#include "getMax.hpp"

int main(){
  int data[] = {3,6,1,-4,23,9};
  int max = getMax(data, sizeof(data)/sizeof(int));
  printf("max = %d\n", max);
  return 0;
}
