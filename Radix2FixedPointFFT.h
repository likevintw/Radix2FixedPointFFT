//Radix2 Fixed Point FFT A7
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Fixed_FFT_2radix
/**/
#define PI 3.14159
#define angle2radian 57.29
class Fixed_FFT_2radix
{
public:
	int* re, * im;
	int data_size;
	int* cost, * sint;
	int* output_data_Amplitude;
	//
	Fixed_FFT_2radix();
	void FFT_2radix_initialization();
	void FFT_2radix_algorithm();
};