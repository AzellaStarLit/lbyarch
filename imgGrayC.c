#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern float imgCvtGrayInttoFloat(int w, int h, int* arr1, float* arr2);

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
	
	//imgCvtGrayInttoFloat(smpW, smpH, abc, def);
	
	
	// SAMPLE
	
	
	// PRINT SAMPLE
	int i, j;
	for(i = 0; i < smpW; i++){
		for( j = 0; j < smpH; j++){
			printf("%d ", abc[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	/****************************************************** 
		VARIABLE DECLARATIONS
	******************************************************/
	// dimension of array
	int width;
	int height;
	
	// execution time
	clock_t start, end;
	double time_used;
	
	
	/****************************************************** 
		GET USER INPUT
	******************************************************/
	
	// GET INPUT FROM USER
	
	printf("Enter width: ");
	scanf("%d", &width);
	
	printf("Enter height: ");
	scanf("%d", &height);
	
	// TODO: REMOVE PRINT WIDTH AND HEIGHT
	printf("%d", width);
	printf("%d", height);
	
	/****************************************************** 
		ALLOCATE TO MEMORY
	******************************************************/
	
	
	/****************************************************** 
		CONVERT GRAY INT TO FLOAT
	******************************************************/
	
	// int array[height][width];
	
	start = clock();
	
	// TODO: Call function here
	
	end = clock();
	
	//Calculate time in milliseconds
	time_used = (((double)end - start)) / CLOCKS_PER_SEC * 1000;
	
	printf("\nTime Executed: %ld ms", time_used);
	
	return 0;
}
