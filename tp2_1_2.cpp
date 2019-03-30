#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void){
  int a,b,i;
  double mt[N][M];
  int size;
  for (a = 0; a < N; ++a)
  {
    for (b = 0; b < M; ++b)//Poner valores de matriz en numero random
    {
      mt[a][b]=rand() % 25;
    }
  }
  for (i = 1; i < 21; ++i)
  {
    printf("%.2lf   ", *(&mt[0][0]+(i-1)));
    if ((i%5) == 0 && i>0){
      printf("\n");//para que la matriz quede ordenada
    }
  }
}