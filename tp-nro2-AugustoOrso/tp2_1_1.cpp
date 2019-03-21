#include <stdio.h>
#include <stdlib.h>

void main(){

	#define N 4
	#define M 5


	int f,c;
	double mt[N][M];

	for (f = 0; f < N; f++){
		for(c = 0; c < M; c++){
			printf("%1f", mt[f][c]);
		}
	printf("\n");	
	}


}