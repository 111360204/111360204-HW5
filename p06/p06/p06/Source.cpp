#include<stdio.h>
#include<stdlib.h>

int cubeByValue(int n);//函式宣告

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number=cubeByValue(number);//函式return的值丟到number去

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeByValue(int n)
{
	return n * n * n;
}