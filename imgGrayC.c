#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern float imgCvtGrayInttoFloat(int w, int h, int* arr1, double* arr2);

int main()
{	
	// THIS IS ONLY FOR SAMPLE PROGRAM
	int smpW = 3;
	int smpH = 4;
	
	printf("SAMPLE ARRAY\n");
	
	int abc [3][4] = {
		{ 64, 89, 114, 84},
		{ 140, 166, 191, 84},
		{ 216, 242, 38, 84}
	};
	
	double* def = (double *) malloc (smpW * smpH * sizeof(double));
	// imgCvtGrayInttoFloat(smpW, smpH, (int*)abc, def);
	
	
	// SAMPLE
	
	
	// PRINT SAMPLE
	int a, b;
	for(a = 0; a < smpW; a++){
		for( b = 0; b < smpH; b++){
			printf("%lf ", def[a * smpW + b]);
		}
		printf("\n");
	}
	
	
	/****************************************************** 
		VARIABLE DECLARATIONS
	******************************************************/
	// dimension of array
	int width;
	int height;
	int i, j;
	
	// execution time
	clock_t start, end;
	double time_used;
	
	
	/****************************************************** 
		GET USER INPUT
	******************************************************/
	
	// GET INPUT FOR HEIGHT AND WIDTH
	
	printf("Enter width: ");
	scanf("%d", &width);
	
	printf("Enter height: ");
	scanf("%d", &height);
	
	/****************************************************** 
		ALLOCATE TO MEMORY
	******************************************************/
	int* arr1 = (int*) malloc (width * height * sizeof(int));
	double* arr2 = (double*) malloc (width * height * sizeof(double));
	
	// GET INPUT FOR ARRAY
	
	printf("Enter the elements of the array: \n");
	
	for (i=0; i < height; i++){
		for(j=0; j < width; j++){
			scanf("%d", &arr1[i * width + j]);
		}
	}
	
	/****************************************************** 
		CONVERT GRAY INT TO FLOAT
	******************************************************/
	
	start = clock();
	
	// TODO: Call function here
	
	
	end = clock();
	
	//Calculate time in milliseconds
	time_used = (((double)end - start)) / CLOCKS_PER_SEC * 1000;
	
	printf("\nTime Executed: %ld ms", time_used);
	
	
	// TODO: REMOVE AND PRINT VALUES IN FLOAT ARRAY
	
	printf("\nYou entered:\n");
	for (i = 0; i < height; i++) {
	    for (j = 0; j < width; j++) {
	        printf("%d ", arr1[i * width + j]);
	    }
	    printf("\n");
	}
	
	return 0;
}
