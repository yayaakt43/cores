#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main (int argc, char const *argv[]){

  #pragma omp parallel for

  for(int n=0;n<8;n++){
    printf("Element %d traité par le thread %d \n",n,omp_get_thread_num());
  }

  return 0;
}
