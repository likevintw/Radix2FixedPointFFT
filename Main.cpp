
#include "Radix2FixedPointFFT.h"

void Fixed_FFT_2radix_Example()
{
	Fixed_FFT_2radix FFTtest;
	// Set data size
	FFTtest.data_size = 128; // The Number must be equal or smaller than 128.

	// Initializtion
	FFTtest.FFT_2radix_initialization(); 
	// Set Input Data
	printf("Input Data\n");
	for (int i(0); i < FFTtest.data_size; i++)
	{
		FFTtest.re[i] = 30000 * sin(i * 30 / 57.3);
		FFTtest.im[i] = 0; //All of Image parts must be set as 0
		printf("%d\n", FFTtest.re[i]); //Show the Input Data
	}

	// FFT Algorithm
	FFTtest.FFT_2radix_algorithm(); 

	// Show Result
	printf("Show Fixed FFT Result\n");
	for (int i(0); i < FFTtest.data_size >> 1; i++)
	{
		//printf("%d %d \n", FFTtest.re[i], FFTtest.im[i]); //Show the result
		printf("%d\n", FFTtest.output_data_Amplitude[i]);
	}

}




int main()
{
	printf("Fixed Point FFT Example\n");
	Fixed_FFT_2radix_Example();
	return 0;
}