#include <stdio.h>
int maxEleman( int x[] ,int boy ){
	int i,max = 0;
	for(i = 0;i < boy; i++){
		if(max < x[i]){
			max = x[i];
		}
	}
	return max;
}
int main() {
	int A[7] = {50, -20, 30, 70, -40, -10, 60};
	int B[9] = {5, 10, -5, 35, -10, 20, -15, 15, 25}; 
	printf("A dizisinde max eleman = %d\n", maxEleman(A,7));
	printf("B dizisinde max eleman = %d\n", maxEleman(B,9));
return 0;
}





