#include<stdio.h>
int a, b, c;
double sum = 0;
void juzhen(double A[3][4],double B[4][5], double c[3][5]);
double juzhen(double A[3][4],double B[4][5], double c[3][5]){
	for (a = 0; a <= 2; a++) {
		for (b = 0; b <= 4; b++) {
			for (c = 0; c <= 3; c++) {
				sum = sum + A[a][c]+ B[c][b];
				C[a][b]= sum;
			}
		}
	}
}
double A[3][4]= { {1,2,3,4},{5,6,7,8},{9,0,1,2}};
double B[4][5] = { {1, 9, 1,9, 8}, {1, 1,4,5, 1},{0,7,2,1,1} ,{ 4,3,2,5,6 } };
double c[3][5];
int main(){
	for (a = 0; a <= 2; a++) {
		for (b = 0 : b <= 4; b++) {
			printf("c[%d][%d]= %lf\n", a, b, c[a][b]);
		}
return 0:
}