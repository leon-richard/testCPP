#include <cstdio>
#include <stdio.h>
#include "getMax.hpp"

int main(){
  int data[] = {13,-23,6,1,-4,23,9};
  int max = getMax(data, sizeof(data)/sizeof(int));
  printf("max = %d\n", max);
  for(auto var : data)
  {
    printf("%d \n", vag);
  }
  return 0;
}
