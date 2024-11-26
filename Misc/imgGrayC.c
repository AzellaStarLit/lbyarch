#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void imgCvtGrayInttoFloat(int w, int h, int* arr1, float* arr2);

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
	
	float* def = (float *) malloc (smpW * smpH * sizeof(float));
	
	// FUNCTION CALL HERE
	
	imgCvtGrayInttoFloat(smpW, smpH, (int*)abc, def);
	
	// PRINT SAMPLE RESULT
	int a, b;
	int c = 0;
	
	for(a = 0; a < smpW; a++){
		for( b = 0; b < smpH; b++){
			printf("%.2lf ", def[c]);
			c++;
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
	int index;
	
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
	float* arr2 = (float*) malloc (width * height * sizeof(float));
	
	// GET INPUT FOR ARRAY
	
	printf("Enter the elements of the array: \n");
	
	index = 0;
	for (i=0; i < height; i++){
		for(j=0; j < width; j++){
			scanf("%d", &arr1[index]);
			index++;
		}
	}
	
	printf("\nYou entered array:\n");
	index = 0;
	for (i = 0; i < height; i++) {
	    for (j = 0; j < width; j++) {
	        printf("%d ", arr1[i * width + j]);
	        index++;
	    }
	    printf("\n");
	}
	
	/****************************************************** 
		CONVERT GRAY INT TO FLOAT
	******************************************************/
	
	start = clock();
	
	// TODO: Call function here
	imgCvtGrayInttoFloat(width, height, arr1, arr2);
	
	end = clock();
	
	//Calculate time in milliseconds
	time_used = (((double)end - start)) / CLOCKS_PER_SEC * 1000;
	
	// PRINT RESULTING ARRAY
	printf("\nRESULT:\n");
	index = 0;
	for (i = 0; i < height; i++) {
	    for (j = 0; j < width; j++) {
	        printf("%.2lf ", arr2[index]);
	        index++;
	    }
	    printf("\n");
	}
	
	printf("\nTime Executed: %.2lf ms", time_used);

	return 0;
}
