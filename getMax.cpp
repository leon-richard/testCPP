#include "getMax.hpp"

int getMax(int data[], int n){
  int ret = data[0];
  for (int index = 1; index < n; index++) {
    if(data[index] > ret){
      ret = data[index];
    }
  }
  return ret;
}
