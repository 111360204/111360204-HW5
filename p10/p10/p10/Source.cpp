#include<stdio.h>
#include<stdlib.h>

void cubeByReference(int *nPtr);//傳址

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByReference(&number);//傳址值會跟著變，因為位址一樣所以同步

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}