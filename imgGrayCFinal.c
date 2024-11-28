/*
MP2 (S16)
Alabat, Jeanne Hazel
Baterina, Patricia Ysabelle
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void imgCvtGrayInttoFloat(int w, int h, int* arr1, float* arr2);

int main()
{	
	
	/****************************************************** 
		VARIABLE DECLARATIONS
	******************************************************/
	//For dimension of array.
	int width;
	int height;
	//For looping counters.
	int i, j; 
	int index;
	int loopFlag;
	
	//For average execution time.
	clock_t start, end;
	double time_used;
	double average_time;
	
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
	for (i=0; i < width; i++){
		for(j=0; j < height; j++){
			scanf("%d", &arr1[index]);
			index++;
		}
	}
	
	/****************************************************** 
		CONVERT GRAY INT TO FLOAT
	******************************************************/
	/*Checks for average time for function imgCvtGrayInttoFloat 
	in converting array int to array float using x86.  */
	start = clock();
	
	 for (loopFlag = 0; loopFlag < 30; loopFlag++) {
			imgCvtGrayInttoFloat(width, height, arr1, arr2);
	    }
	
	end = clock();
	
	//Calculate time in milliseconds
	time_used = (double)(end - start) / CLOCKS_PER_SEC * 1000;
	
	// Divide by 30 times to get average execution time
	average_time = time_used / 30;
	
	// PRINT RESULTING ARRAY
	printf("\nRESULT:\n");
	index = 0;
	for (i = 0; i < width; i++) {
	    for (j = 0; j < height; j++) {
	        printf("%.4lf ", arr2[index]);
	        index++;
	    }
	    printf("\n");
	}
	
	printf("\nAverage Execution Time (30 runs): %.6lf ms", average_time);

	return 0;
}
