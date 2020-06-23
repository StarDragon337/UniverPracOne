#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>



void calculateMirrorCoordinates()
{
	float x0;
	float y0;
	float A;
	float B;
	float C;

	printf("Input coordinate X and Y: ");
	scanf_s("%f%f", &x0, &y0);
	
	printf("Input a, b and c for equation ax + by + c = 0: ");
	scanf_s("%f%f%f", &A, &B, &C);

	float xi, yi;

	if (A == 0.0 && B != 0.0)
	{		
		xi = x0;
		yi = -C / B;
	}
	else if (A != 0.0 && B == 0.0)
	{
		xi = -C / A;
		yi = y0;
	}
	else if (A != 0.0 && B != 0.0)
	{		
		float k = -A / B;
		float b = -C / B;

		xi = (k * (y0 - b) + x0) / (k * k + 1);		
		yi = k * xi + b;
	}
	else
	{
		printf("Invalid input!");
		return;
	}

	float x1 = 2.0 * xi - x0;
	float y1 = 2.0 * yi - y0;

	printf("X = %f\nY = %f", x1, y1);
}

int main()
{
	calculateMirrorCoordinates();
	return 0;
}