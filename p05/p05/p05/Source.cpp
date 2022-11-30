#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;//宣告一整數
	int *aPtr;//宣告一指標變數

	a = 7;
	aPtr = &a;//aPtr指向a的位址

	printf("The address of a is %p"
		"\nThe value of aPtr is %p", &a, aPtr);

	printf("\n\nThe value of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr);//取值

	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n",&*aPtr,*&aPtr);//取aPtr指向的值然後再取位址，取aptr裡的位址然後再取裡面的值，裡面的值是位址
	system("pause");
	return 0;
}