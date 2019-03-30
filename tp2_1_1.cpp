#include <stdio>
#include <stdlib>

#define N 4
#define M 5

void main(){
    double mt [N] [M];
    int f,c;
    for (f = 0; f < N ; f++){
   		for (c = 0; c < M; c++){
   			//scanf("Ingrese un valor%lf\n",f);
   			//scanf("Ingrese un valor%lf\n",c);
    		printf("%.2lf   ", mt [f] [c] = 10+rand()%(100+1-10));
    	}
    	printf("\n");
    }
	//return 0;
}