# About the Program

A grayscale image is interally represented as a 2d array, where the width represents the number of pixels in a row and the heigh represents the number of pixels in a column. The program converts an 8-bit signed (uint8) integer representation of the pixels (0 - 255) to a single precision floating-point rerpesentation using C and x86 assembly.

To convert the pixels, the following ration and proportion equation:

``f / i = 1 / 255.0``

where f is the float based pixel value and i is the integer based pixel value

The C program collects the input of the user for the image dimensions and the pixel values, and prints the coverted results, while the conversion function, imgCvtGrayIntToFloat is implemented in x86 assembly.

To compile and run the program, use the following commands below:

`nasm -f win64 imgGrayAsmFinal.asm`

`gcc -c imgGrayCFinal.c -o imgGrayCFinal.obj`

`gcc imgGrayCFinal.obj imgGrayAsmFinal.obj -o <program.exe>`

# Program Output (Correctness Check)



# Execution Time

The execution time of the program was measured by running imgCvtGrayInttoFloat() function 30 times through various input dimensions. The average execution time was computed based on 30 runs and are shown in the table below:


| Image Size   | Total Elements  | Execution Time (ms)|
|:------------:|:---------------:|:------------------:|
| 10 x 10     | 100             | 0.000000           |
| 100 X 100   | 10,000          | 0.033333           |
| 1000 X 1000 | 1,000,000       | 4.100000           |

# Analysis


