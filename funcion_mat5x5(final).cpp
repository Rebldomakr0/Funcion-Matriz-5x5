#include <stdio.h>
/*matriz de 5*5 float. tres funciones:
1. mayor: regresa el numero mayor.
2. menor: regresa el numero menor.
3. promedio: regresa el promedio de toda la matriz*/

void mayor( int mat[3][3]){
	int may=-1000;
	for(int i=0; i<3; i++){
		for(int m=0; m<3; m++){
			if(may <  mat[i][m]){
				may=mat[i][m];
				
}
}
}
	printf("\n");
	printf("El valor mas alto de la matriz es %d", may);
}
void menor(int mat[3][3]){
	int men=1000;
	for(int i=0; i<3; i++){
		for(int m=0; m<3; m++){
			if(men>mat[i][m]){
				men=mat[i][m];
			}
		}
	}
	printf("\n");
	printf("El valor mas bajo de la matriz es %d", men);
}

void promedio(int *prom, int mat[3][3]){
 /*el promedio va fuera de los for*/
 int sum=0;
	for(int i=0; i<3; i++){
		for(int m=0; m<3; m++){
			sum+=(mat[i][m]);

		}
	}
	*prom=sum/9;
}

int main(){
	int mat[3][3], num, may=-1000, men=1000, sum=0, prom;
	int i,m;
	
	for(i=0; i<3; i++){
		for(m=0; m<3; m++){
			printf("Ingrese el valor de la fila %d en la columna %d: ", i+1, m+1);
			scanf("%d", &mat[i][m]);
		}
	}
	
	mayor(mat);
	menor(mat);
	promedio(&prom, mat);
		printf("\n");
	printf("El promedio de la matriz es %d", prom);
	
	return 0;
}
