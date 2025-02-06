#include<stdio.h>
//multiply two matrix
void multiplyMatrices(int a[2][2], int b[2][2],int c [2][2]){
	for (int i=0; i<2;i++){
		for (int j=0;j<2;j++){
			c[i][j] = 0;
			for (int k =0;k<2;k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

//Function to display the matrix
void displayMatrix(int matrix[2][2]) {
	for (int i = 0;i<2;i++) {
		for (int j=0;j<2;j++){
			printf("%d\t",matrix[i][j]);
			
		}
		printf("\n");
	}
}
int main()
{
	
	int a[2][2];	
	int b[2][2];
	int c[2][2];
	
	printf("  \n");
	
	//intput for first matrix
	printf("       ---------      Matrix 1        ---------  ");
	for (int i = 0; i<2;i++) {
		for (int j=0;j<2;j++){
			printf("\nEnter element [%d][%d]:",i + 1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	//Display first matrix
	printf(" Matrix 1 ");
	printf("\n");
	displayMatrix(a);
		
		
	//Input for second matrix
	
    printf("       ---------      Matrix 2       --------- \n ");
	printf("\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\nEnter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Display second matrix
    printf(" Matrix 2 ");
    printf("\n");
    displayMatrix(b);

    // Multiply matrices
    multiplyMatrices(a,b,c);

    // Display result
    printf(" \n  --------Result: Multiplication Matrix-----------     \n");
    displayMatrix(c);

    return 0;
}

	
	

